// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int j = 1;
//   int n;

//   cout << "please enter the value of n : ";
//   cin >> n;

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

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;

//   cout << "please enter the value of n : ";
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

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of n : ";
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

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   int count = 1;
//   cout << "please enter the value of n : ";
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

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of n : ";
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

// #include <iostream>
// using namespace std;

// int main()
// {
//   int i = 1;
//   int n;
//   cout << "please enter the value of n : ";
//   cin >> n;

//   while (i <= n)
//   {
//     int j = 1;
//     while (j <= i)
//     {
//       cout << i + 1 - j << " ";
//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }

#include <iostream>
using namespace std;

int main()
{
  int i = 1;
  int n;

  cout << "please enter the value of n : ";
  cin >> n;

  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      char ch = 'A' + i + j - 1;
      cout << ch << " ";
      ch += 1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}