
#include<stdio.h>
#include<stdlib.h>

// using namespace std;


struct NODE{
  int a;
  short b[2];
  char *ptr; 
};

int main()
{
  struct NODE str;
  str.a = 1;
  str.b[0] = 2;
  str.b[1] = 3;
  // str.ptr = new char;
	str.ptr = (char *)malloc(sizeof(char *));
  str.ptr = "abcdqweqweqwe";
  struct NODE str2;
  str2 = str;
  printf("%d\n",str2.a);
  printf("%d\n",str2.b[0]);
  printf("%d\n",str2.b[1]);
  printf("%s\n",str2.ptr);
  printf(" \n");
  printf("%d\n",sizeof(char *));
  printf("%d\n",sizeof(char ));

  // cout << str2.a << endl;
  // cout << str2.b[0] << endl;
  // cout << str2.b[1] << endl;
  // cout << &str2.ptr << endl;
}
