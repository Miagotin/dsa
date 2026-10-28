#include <bits/stdc++.h>
using namespace std;

/*
void merge(const vector<int>& l, const vector<int>& r, vector<int>& a) {
    int n = l.size(), m = r.size();
    int i = 0, j = 0;
    while(i < n || j < m) {
        if(j == m || (i < n && (l[i] <= r[j]))) {
            a[i+j] = l[i++];
        }
        else {
            a[i+j] = r[j++];
        }
    }
}

void mergeSort(vector<int>& a) {
    int n = a.size();
    if(n <= 1) return;
    int k = n / 2;

    vector<int> l(k), r(n - k);
    for(int i = 0; i < k; ++i) l[i] = a[i];
    for(int i = k; i < n; ++i) r[i-k] = a[i];

    mergeSort(l);
    mergeSort(r);
    merge(l, r, a);
}
*/

void mergeSort(vector<int>& a, vector<int>& tmp, size_t l, size_t r) {
    if(r - l <= 1) return;
    size_t m = l + (r - l) / 2;

    mergeSort(a, tmp, l, m);
    mergeSort(a, tmp, m, r);

    size_t ll = l, rr = m, k = l;

    while(ll < m || rr < r) {
        if(rr == r || (ll < m && (a[ll] <= a[rr]))) {
            tmp[k] = a[ll];
            k++, ll++;
        }
        else {
            tmp[k] = a[rr];
            k++, rr++;
        }
    }

    copy(begin(tmp) + l, begin(tmp) + r, begin(a) + l);
}

void mergeSort(vector<int>& a) {
    vector<int> tmp(a.size());
    mergeSort(a, tmp, 0, a.size());
}

int main() {
    
}