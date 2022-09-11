#include <iostream>
#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int> arr);
void swap(int *a, int *b);

int main(void)
{
    int n = 5;
    vector<int> arr = { 5, 2, 1, 3, 4 };
    auto result = bubble_sort(arr);

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

vector<int> bubble_sort(vector<int> arr)
{
    int n = arr.size();
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // i번째 정렬 결과 출력
        for (int c = 0; c < n; c++) {
            cout << arr[c] << " ";
        }
        cout << endl;
    }

    return arr;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}
