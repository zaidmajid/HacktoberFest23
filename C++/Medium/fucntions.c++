// muhammad zaid majid 
//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
int max_of_four(int a, int b, int c, int d) {
    int max = a;
    int numbers[] = {b, c, d};
    for (int n : numbers) if (n > max) max = n;   
    return max;
}