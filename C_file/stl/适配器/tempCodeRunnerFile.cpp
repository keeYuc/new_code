auto a = find_if(p1.begin(), p1.end(), bind2nd(greater(), 5));
    // if (a != p1.end())
    // {
    //     cout << "找到了" << *a<< endl;
    // }