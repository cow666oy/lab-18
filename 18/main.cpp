1 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n, temp;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}

2 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    double* b = new double[n];
    for (int i = 0; i < n; ++i)
    cin >> a[i];
    b[0] = a[0];
    for (int i = 1; i < n; ++i) {
        b[i] = double(a[i]) / double(i);
    }
    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }
}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
    cin >> a[i];
    bool flag;
    int nech;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] % 2 != 0) {
            flag = true;
            nech = a[i];
            break;
        }
        else flag = false;
    }
    if (flag == true) {
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 != 0) {
                a[i] += nech;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    cout << a[i] << " ";
}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int min = 9999, max = -9999, k1 = 0, k2 = 0;
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < min) { min = a[i]; k1 = i; }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > max) { max = a[i]; k2 = i; }
    }
    if (k1 > k2) {
        for (int i = k2 + 1; i < k1; i++) {
            a[i] = 0;
            cout << a[i] << " ";
        }
    }
    else if (k2 > k1) {
        for (int i = k1 + 1; i < k2; i++) {
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

5 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int sort(const void* a, const void* b )
{
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
    cin >> a[i];
    qsort(a, n, sizeof(int), sort);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
