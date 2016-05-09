//Homework 2 - Sort w Vectors. I decided to choose option 1.

void bubble_sort(std::vector<int>& vec) {
    bool swap = true;
      while(swap){
        swap = false;
        for (size_t i = 0; i < vec.size() -1; i++) {
            if (vec[i] > vec[i+1] ){
                vec[i] += vec[i+1];
                vec[i+1] = vec[i] - vec[i+1];
                vec[i] -= vec[i+1];
                swap = true;
            }
        }
      }
}
