#include <iostream>
#include <string>

template <typename K, typename V>
class HashNode
{
private:
	K key;
	V value;
	HashNode* next;

public:
	HashNode(const K& key, const V& value)
	{
		this->key = key;
		this->value = value;
		this->next = nullptr;
	}

	const K getKey() const
	{
		return key;
	}

	const V getValue() const
	{
		return value;
	}

	HashNode* getNext() const
	{
		return next;
	}

	void setValue(const V& value)
	{
		this->value = value;
	}

	void setNext(HashNode* next)
	{
		this->next = next;
	}
};

template <typename K>
struct KeyHash
{
	int operator()(const K& key)
	{
		return key % 256;
	}
};

template <typename K, typename V, typename F = KeyHash<K>>
class HashMap
{
private:
	HashNode<K, V> **table;
	F hashFunc;
	unsigned size;

	void copy(const HashMap& rhs)
	{
		this->table = new HashNode *[rhs.getSize()];
		this->size = rhs.getSize();
		HashNode<K, V> *copy = nullptr;
		HashNode<K, V> *cur = nullptr;

		for (unsigned i = 0; i < size; ++i)
		{
			this->table[i] = rhs.table[i];
			copy = rhs.table[i];
			cur = table[i];

			while (copy->getNext() != nullptr)
			{
				cur->setNext(new HashNode(copy->getNext()));
				copy = copy->getNext();
				cur = cur->getNext();
			}
		}
	}

	void clear()
	{
		HashNode<K, V> *line = nullptr;
		HashNode<K, V> *prev = nullptr;
		for (unsigned i = 0; i < size; ++i)
		{
			line = table[i];

			while (line != nullptr)
			{
				prev = line;
				line = line->getNext();
				delete prev;
			}
			table[i] = nullptr;
		}

		delete[] table;
	}

public:
	HashMap(const unsigned& size)
	{
		table = new HashNode<K, V> *[size];
		this->size = size;

		for (unsigned i = 0; i < size; ++i)
		{
			table[i] = nullptr;
		}
	}

	HashMap(const HashMap& rhs)
	{
		copy(rhs);
	}

	HashMap& operator=(const HashMap& rhs)
	{
		if (this != &rhs)
		{
			clear();
			copy(rhs);
		}
		return *this;
	}

	~HashMap()
	{
		clear();
	}
};
