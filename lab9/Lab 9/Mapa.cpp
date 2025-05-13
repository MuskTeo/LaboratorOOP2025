#include "Mapa.h"

void Map::Set(K key, V value)
{
	int i;
	for (i = 0; i < size; i++)
		if (this->data.key == 0 && this->data.value == 0)
		{
			this->data.key = key;
			this->data.value = value;
		}

}
bool Map::Get(const K& key, V& value)
{
	int i;
	for (i = 0; i < size; i++)
		if (this->data.key == key)
		{
			this->data.value = value;
			return true;
		}
	return false;
}
int Map::Count()
{
	int i, k = 0;
	for (i = 0; i < size; i++)
	{
		if (this->data[i].key != 0)
			k++;

	}
	return k;
}
void Map::Clear()
{
	int i;
	for (i = 0; i < size; i++)
	{
		data[i].key = 0;
		data[i].value = '0';
	}
	
}
bool Map::Delete(const K& key)
{
	int i;
	for (i = 0; i < size; i++)
		if (this->data.key == key)
		{
			this->data.value = '0';
			this->data.key = 0;
			return true;
		}
	return false;
}
