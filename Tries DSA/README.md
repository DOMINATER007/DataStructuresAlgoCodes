## [Ada and Indexing](https://www.spoj.com/problems/ADAINDEX/)
#### classic Trie question where given strings and q string queries need to find how many strings start with prefx (query strings)  (insert and pref and for each node maintain startswith)

## [Try to Complete](https://www.spoj.com/problems/TRYCOMP/)
#### Same as above question but for given prefx need to find word that has more frequency and starts with it and lexographically small if freq match (Maintain a global map and while insertion itself find answer for every prefix)

## [E. Karuta](https://atcoder.jp/contests/abc287/tasks/abc287_e)
#### classic #startsWith Trie with Binary search Logic

## [Shortest Names](https://vjudge.net/problem/UVA-12506)
#### classic #startsWith Trie with Binary search Logic

## [Query on Strings](https://www.codechef.com/problems/NPLFLF)
#### Additiona and removal of tries and to support suffix we are reversing strings and inserting them and to know whether there exists a group k strings with length l -----> Maintain a multiset for each length. So for each prefix (i.e Trie Node) upate the multiset by adding starts and deleting previous starts if it exists . After removal of string make it empty "" ----> or else it costs  a WA even though your logic is correct because u already removed it (Painfull debugging...) (A simple file closing or socket closing analogy)

## [Order of digits](https://toph.co/p/priority-of-digits)
#### classic #startsWith trie BUT DIGITS AND HERE WE WANT (#LEXOGRAPHICALLY SMALLER FROM GIVEN NUMBER X)  ---> LEXOGRAPHY CHECKING WITH TRIE (power of digits also changes like digit 1 is eq to 9), etc

## [D. Vasiliy's Multiset](https://codeforces.com/contest/706/problem/D)
#### Classic Bit Trie ( For each node store lvl (2 pow bit position), startsWith. (Dont forget 0 in multiset case)..

