std::vector<int> sortedArray(std::vector<int> a, std::vector<int> b) {
    int n = a.size();
    int m = b.size();
    std::vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] > b[j]) {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
        else {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}
