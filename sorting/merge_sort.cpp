#include <bits/stdc++.h>

using namespace std;

void merge(const vector<int>& a, const vector<int>& b, vector<int>& ans) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    while(i < n || j < m) {
        if(j == m || (i < n && (a[i] <= b[j]))) {
            ans[i+j] = a[i];
            i++;
        }
        else {
            ans[i+j] = b[j];
            j++;
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

int main() {
    vector<int> a = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergeSort(a);
    for(int i = 0; i < a.size(); ++i) {
        cout << a[i] << ' ';
    }
}