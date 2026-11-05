#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

/*
//APPROACH 1: Recursive Merge Sort (creating two subarrays on each recursive call)
//O(nlogn) Time, O(n) Space

//Merges two sorted arrays into one sorted array
void merge(const vi& l, const vi& r, vi& a) {
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

void mergeSort(vi& a) {
    int n = a.size();
    if(n <= 1) return;
    int k = n / 2;

    vi l(begin(a), begin(a) + k);
    vi r(begin(a) + k, end(a));

    mergeSort(l);
    mergeSort(r);
    merge(l, r, a);
}
*/

/*
//APPROACH 2: Recursive Merge Sort (single temporary array for all recursive calls)
//O(nlogn) Time, O(n) Space, fewer allocations

void mergeSort(vi& a, vi& tmp, size_t l, size_t r) {
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

void mergeSort(vi& a) {
    if(a.size() <= 1) return;
    vi tmp(a.size());
    mergeSort(a, tmp, 0, a.size());
}
*/


/*
//APPROACH 3: Ping-Pong Merge Sort (alternating buffers avoiding copying)
//O(nlogn) Time, O(n) Space, fewer allocations, less copying

void mergeSort(vi& tmp, vi& a, size_t l, size_t r) {
    if(r - l <= 1) return;
    size_t m = l + (r - l) / 2;

    mergeSort(a, tmp, l, m);
    mergeSort(a, tmp, m, r);

    size_t i = l, j = m, k = l;

    while(i < m && j < r) {
        if(tmp[i] <= tmp[j]) {
            a[k++] = tmp[i++];
        }
        else {
            a[k++] = tmp[j++];
        }
    }

    while(i < m) {
        a[k++] = tmp[i++];
    }
    while(j < r) {
        a[k++] = tmp[j++];
    }
}

void mergeSort(vi& a) {
    if(a.size() <= 1) return;
    vi tmp = a;
    mergeSort(tmp, a, 0, a.size());
}
*/

int main() {
    
}
