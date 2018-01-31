#include <assert.h>
#include <map>
#include <limits>
#include<iostream>

class K
{
private:
        int key;
public:

bool operator< (const K& r)
{   
  return (key < r.key);
}
};

class V 
{
private:
        char Val;
public:
bool operator == (const V& r)
{
     return (Val == r.Val);
}
};

template<class K, class V>

class interval_map 
{
    friend void IntervalMapTest();
private:
    std::map<K,V> m_map;
public:
    // constructor associates whole range of K with val by inserting (K_min, val)
    // into the map
    interval_map( V const& val) {
    m_map.insert(m_map.begin(),std::make_pair(std::numeric_limits<K>::lowest(),val));

};

    // Assign value val to interval [keyBegin, keyEnd). 
    // Overwrite previous values in this interval. 
    // Do not change values outside this interval.
    // Conforming to the C++ Standard Library conventions, the interval 
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval, 
    // and assign must do nothing.

void assign( K const& keyBegin, K const& keyEnd, const V& val ) 
{

// If !( keyBegin < keyEnd ), this designates an empty interval, 
// and assign must do nothing.

if(!(keyBegin<keyEnd))
{
			return;
}

const_iterator it;
it=m_map.begin();



for(int j=keyBegin;j<keyEnd;j++)
{

it = m_map.find(j);

if(it==m_map.end())
{
        m_map.insert(m_map<K,V>(j,val));

}
else{ 
   m_map.erase(it);
   m_map.insert(pair<K,V>(j, value));

}
}
}
// look-up of the value associated with key

V const& operator[]( K const& key ) const
{

  return ( --m_map.upper_bound(key) )->second;

}

};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a function IntervalMapTest() here that tests the
// functionality of the interval_map, for example using a map of unsigned int
// intervals to char.

static void IntervalMapTest()
{
	//cout<<"Testing ....";
}

int main(int argc, char* argv[]) {

    IntervalMapTest();
template_map<int,int> Map1 (10);

Map1.insert_ToMap(3,6,20);
Map1.insert_ToMap(4,14,30);
Map1.insert_ToMap(34,37,12);

for (auto i = Map1.begin(); i != Map1.end(); i++)
{
   cout<< i->first<<"   "<<i->second<<std::endl; 
}
    return 0;

}

