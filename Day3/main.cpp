// // patterns
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "please enter the value of n : " << endl;
//   cin >> n;

//   int i = 1;
//   while (i <= n)
//   {
//     int j = 1;
//     int v = 0;
//     while (j <= n)
//     {
//       v = n - j + 1;
//       cout << v << " ";
//       j = j + 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//        couting printing

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 4;
//   int i = 1, j = 1;
//   while (i <= n)
//   {
//     while (j <= n * i)
//     {
//       cout << j << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//                              triangle pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of n: " << endl;
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << " * ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//        triangl counting

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter enter the value of n : " << endl;
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << i << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//         triangle counting in increasing order

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n, count = 1;
//   cout << "please enter the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << count << " ";
//       count += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//         counting triangle with repeated numbers

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i;
//   int n, count;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     count = i;
//     int j = 1;
//     while (j <= i)
//     {
//       cout << count << " ";
//       count += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//        alternative for the same programe

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i;
//   int n, count;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {

//     int j = 1;
//     while (j <= i)
//     {
//       cout << i + j - 1 << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//       reverse counting triangle

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i;
//   int n, count;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     count = i;
//     int j = 1;
//     while (j <= i)
//     {
//       cout << count << " ";
//       count -= 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//            alternative for the same programe

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i;
//   int n;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << i - j + 1 << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//  #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   char ch = 'A';
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= n)
//     {
//       cout << ch << " ";
//       j += 1;
//     }
//     cout << endl;
//     ch += 1;
//     i += 1;
//   }
// }

//           characters printing
// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     char ch = 'A';
//     while (j <= n)
//     {
//       cout << ch << " ";
//       ch += 1;
//       j += 1;
//     }
//     cout << endl;

//     i += 1;
//   }
// }

//          alphabets in increasing order

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   char ch = 'A';

//   int n;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= n)
//     {
//       cout << ch << " ";
//       ch += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     char ch = 'A' + i - 1;
//     while (j <= n)
//     {
//       cout << ch << " ";
//       ch += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

//       trianle same alphabets in a row

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number :";
//   cin >> n;
//   char ch = 'A';

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << ch << " ";
//       j += 1;
//     }
//     cout << endl;
//     ch += 1;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   char ch = 'A';
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << ch << " ";
//       ch += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   char ch;
//   cout << "please enter the number :";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     ch = 'A' + i - 1;
//     while (j <= i)
//     {
//       cout << ch << " ";
//       ch += 1;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     char ch;
//     int j = 1;
//     while (j <= i)
//     {
//       ch = 'A' + n - i + j;
//       cout << ch << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int spaces = n - i;
//     while (spaces)
//     {
//       cout << " ";
//       spaces -= 1;
//     }
//     int j = 1;
//     while (j <= i)
//     {
//       cout << "*";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number: ";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= n - i + 1)
//     {
//       cout << "*";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int spaces = i - 1;
//     while (spaces)
//     {
//       cout << " ";
//       spaces -= 1;
//     }
//     int j = 1;
//     while (j <= n - i + 1)
//     {
//       cout << "*";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int spaces = i - 1;
//     while (spaces)
//     {
//       cout << " ";
//       spaces -= 1;
//     }
//     int j = 1;
//     while (j <= n - i + 1)
//     {
//       cout << i;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int spaces = n - i;
//     while (spaces)
//     {
//       cout << " ";
//       spaces -= 1;
//     }
//     int j = 1;
//     while (j <= i)
//     {
//       cout << i;
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n, count = 0;
//   cout << "please enter the number : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int spaces = i - 1;
//     while (spaces)
//     {
//       cout << " ";
//       spaces -= 1;
//     }
//     int j = 1;
//     while (j <= n - i + 1)
//     {
//       cout << j + count;
//       j += 1;
//     }
//     count += 1;
//     cout << endl;
//     i += 1;
//   }
// }

#include <iostream>
using namespace std;

int main()
{
  int i = 1;
  int n, count = 1;
  cout << "please enter the number : ";
  cin >> n;

  while (i <= n)
  {
    int spaces = n - i;
    while (spaces)
    {
      cout << " ";
      spaces -= 1;
    }
    int j = 1;
    while (j <= i)
    {
      cout << count;
      count += 1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}