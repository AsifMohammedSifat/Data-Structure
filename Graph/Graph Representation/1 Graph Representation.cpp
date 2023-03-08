/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

                                Graph Representation
        1)Adjacency Matrix      2)Adjacency List            3)Edge List

     UnWeighted Graph  |   Adj. Matrix       |      Adj. List       |       Edge List

                             0 1 2 3  -->column     0 -> 1                 [
     0---1                   | | | |                1 -> 0,2,3                [0,1]
        / \                                         2 -> 1,3                  [1,2]
       2---3       row-> 0-  0 1 0 0                3 -> 1,2                  [1,3]
                         1-  1 0 1 1                                          [2,3]
                         2-  0 1 0 1                                       ]
                         3-  0 1 1 0

====================================Weighted Graph -> Representation========================

    Weighted Graph        Adj. Matrix               Adj. List                Edge List

      2
   0----1                   0 1 2 3  -->column    0 -> (1,2)                [
     4 / \ 7                | | | |               1 -> (0,2),(2,4),(3,7)        [0,1,2]
      /   \        row-> 0- 0 2 0 0               2 -> (1,4),(3,7)              [1,2,4]
     2-----3             1- 2 0 4 7               3 -> (1,7),(2,5)              [1,3,7]
        5                2- 0 4 0 5                                             [2,3,5]
                         3- 0 7 5 0                                         ]

**/
