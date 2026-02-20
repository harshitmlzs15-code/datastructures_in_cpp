    long long n;
    cin >> n;
     int count = 0;
    for(; n > 0; count++){
        n /= 10;
    }
    cout << count << endl;
    return 0;
}