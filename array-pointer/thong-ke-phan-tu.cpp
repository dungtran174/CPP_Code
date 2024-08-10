#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

const int MAXLIST = 10000;

typedef struct list {
    int n;
    int nodes[MAXLIST];
} list;

void thongKePhanTu(list ds) {
    unordered_map<int, int> countMap;
    vector<int> appeared;

    // Thống kê số lần xuất hiện của mỗi số và ghi nhớ thứ tự xuất hiện
    for (int i = 0; i < ds.n; ++i) {
        if (countMap.find(ds.nodes[i]) == countMap.end()) {
            appeared.push_back(ds.nodes[i]);
        }
        countMap[ds.nodes[i]]++;
    }
    
    // In kết quả theo thứ tự xuất hiện
    for (int num : appeared) {
        cout << num << " " << countMap[num] << endl;
    }
}

int main() {
    // Khởi tạo danh sách ds
    list ds = {7, {5, 5, 3, 4, 3, 2, 5}};
    
    // Gọi hàm thống kê và in kết quả
    thongKePhanTu(ds);
    
    return 0;
}

    