#include <iostream>
#include <stdio.h>
using namespace std;

int fib(int n){
	int t0 = 0, t1 = 1, sum, i;
	if(n <=1) return n;
	for(i = 2; i <= n; i++){
		sum = t0 + t1;
		t0 = t1;
		t1 = sum;
	}
	return sum;
}

// 0(2^n)
int fibo(int n){
	if(n <=1){
		return n;
	}
	return fibo(n-2) + fibo(n-1);
}







int F[10];
int m_fib(int n){
  if(n <= 1){
    F[n] = n;
    return n;
  }else{
    if(F[n-2] == -1){
      F[n-2] = m_fib(n -2);
    }

    if(F[n-1] == -1){
      F[n-1] = m_fib(n - 1);
    }
    return F[n-2] + F[n-1];
  }
}


int main() {
  int i;
  for(i =0; i <10;i++){
    F[i] = -1;
  }
  int result;
  result = m_fib(10);
  printf("%d ", result);
}