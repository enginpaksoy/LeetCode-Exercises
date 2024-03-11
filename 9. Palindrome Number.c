bool isPalindrome(int x) {
    if(x < 0){
        return false;
    }
    long int y = 0;
    for(int i = x; i > 0; i /= 10){
        y *= 10;
        int a = i % 10;
        y += a;
    }
    if(y == x){
        return true;
    }
    return false;
}
