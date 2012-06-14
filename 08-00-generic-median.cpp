#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template<class T>
T median(vector<T> v)
{
    typedef typename vector<T>::size_type vec_sz;

    vec_sz size = v.size();
    if( size == 0)
        throw domain_error("median of an empty vector");
    sort(v.begin(),v.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
}


int main()
{
    int n = 100;
    vector<double> v(n);

    for(int i = 0; i < n; i++)
        v[i] = random() % n;

    double med = median(v);

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";

    cout << endl;
    cout << "median=" << med << endl;

    return 0;
}