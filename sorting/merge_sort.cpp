#include <bits/stdc++.h>
using namespace std;

/*
void merge(const vector<int>& l, const vector<int>& r, vector<int>& a) {
    int n = l.size(), m = r.size();
    int i = 0, j = 0, k = 0;

    while(i < n && j < m) {
        if(l[i] <= r[j]) {
            a[k++] = l[i++];
        }
        else {
            a[k++] = r[j++];
        }
    }

    while(i < n) {
        a[k++] = l[i++];
    }
    while(j < m) {
        a[k++] = r[j++];
    }
}

void mergeSort(vector<int>& a) {
    int n = a.size();
    if(n <= 1) return;
    int k = n / 2;

    vector<int> l(begin(a), begin(a) + k);
    vector<int> r(begin(a) + k, end(a));

    mergeSort(l);
    mergeSort(r);
    merge(l, r, a);
}
*/

/*
void mergeSort(vector<int>& a, vector<int>& tmp, size_t l, size_t r) {
    if(r - l <= 1) return;
    size_t m = l + (r - l) / 2;

    mergeSort(a, tmp, l, m);
    mergeSort(a, tmp, m, r);

    size_t i = l, j = m, k = l;

    while(i < m && j < r) {
        if(a[i] <= a[j]) {
            tmp[k++] = a[i++];
        }
        else {
            tmp[k++] = a[j++];
        }
    }

    while(i < m) {
        tmp[k++] = a[i++];
    }
    while(j < r) {
        tmp[k++] = a[j++];
    }

    copy(begin(tmp) + l, begin(tmp) + r, begin(a) + l);
}

void mergeSort(vector<int>& a) {
    vector<int> tmp(a.size());
    mergeSort(a, tmp, 0, a.size());
}
*/

int main() {
    
}
