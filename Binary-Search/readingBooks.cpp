/*
Reading Books
Given number of pages inn different books and m students The books are arranged in any order (not necessarily ascending) of number of pages. Every student is assigned to read some consecutive segment of books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

Find the maximum number of pages that a student will have to read.

Sample Input

books = [10, 20,30,15]
students = 2


Sample Output

45



Explanation

There are 2 number of students. Books can be distributed

in following fashion :



  1) [10] and [20, 30, 15]

      Max number of pages is allocated to student

      2 with 65 pages



  2) [10, 20] and [30, 15]

      Max number of pages is allocated to student

      2 with 30 + 15 = 45 pages



  3) [10, 20, 30] and [15]

      Max number of pages is allocated to student

      1 with 60 pages

Of the 3 cases, Option 2 has the minimum pages = 45.
*/
