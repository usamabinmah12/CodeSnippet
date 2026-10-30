
  sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { // no capture method is better as we dont wanna change anything outside
    // Sort by second element in descending order
    // If second elements are equal, sort by first element in ascending order
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
  });
  
