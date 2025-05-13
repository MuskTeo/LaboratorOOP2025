#pragma once
template <typename K, typename V>
class Map {
private:
	struct Pair {
		K key;
		V value;
	};

	Pair* data;
	int size;
	int capacity;
public:
	Map()
	{
		capacity = 5;
		size = 0;
		data = new Pair[capacity];

	}
    ~Map()
	{
		delete[] data;
	}

	
	V& operator[](const K& key)
	{
		int i;
		for (i = 0; i < size; i++)
			if (data[i].key == key)
				return data[i].value;
		data[size].key = key;
		data[size].value = 0;
		++size;
		return data[size - 1].value;
	}

	
	int Count() const
	{
		return size;
	}

	bool Delete(const K& key)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			if (data[i].key == key)
			{
					for (int j = i; j < size - 1; j++)
						data[i] = data[i + 1];
					size--;
					return true;
			}
		}
			return false;
		
	}
	bool Includes(const Map<K, V>& other) {
		for (int i = 0; i < other.size; ++i) {
			bool found = false;

			for (int j = 0; j < this->size; ++j) {
				if (this->data[j].key == other.data[i].key &&
					this->data[j].value == other.data[i].value) {
					found = true;
					break;
				}
			}

			if (!found) {
				return false;
			}
		}

		return true;
	}

	void Set(K key, V value)
	{
		data[size].key = key;
		data[size].value = value;
		size++;
	}


	bool Get(const K& key, V& value)
	{
		int i;
		for (i = 0; i < size; i++)
		{
			if (data[i].key == key)
			{
				value = data[i].value;
				return true;
			}
		}
		return false;
	}


    struct IteratorValue {
        K key;
        V value;
        int index;
    };

    class Iterator {
    private:
        Map<K, V>& map;
        int current;
    public:
		Iterator(Map<K, V>& m, int pos) : map(m), current(pos) {}
		IteratorValue operator*()
		{
			return { map.data[current].key, map.data[current].value, current };
		}
		Iterator& operator++() {
			current++;
			return *this;
		}
		bool operator!=(const Iterator& other) {
			return current != other.current;
		}
    };

	Iterator begin() { return Iterator(*this, 0); }
	Iterator end() { return Iterator(*this, size); }

};
