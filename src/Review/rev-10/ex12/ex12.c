/* 
    下面声明了3个数组: 
        double trots[20]; 
        short clops[10] [30]; 
        long shots[5] [10] [15]; 
        
    a.分别以传统方式和以变长数组为参数的方式编写处理 trots 数组的 void函数原型和函数调用 
    b.分别以传统方式和以变长数组为参数的方式编写处理clops数组的void函数原型和函数调用 
    c.分别以传统方式和以变长数组为参数的方式编写处理shots数组的void函数原型和函数调用
*/

/* 
    a. double trots[20]; 
        传统方式: 
            函数原型：void process_trots(double trots[], int size); 
            函数调用：process_trots(trots, 20); 

        变长数组方式: 
            函数原型：void process_trots(int size, double trots[size]); 
            函数调用：process_trots(20, trots); 

    b. short clops[10] [30]; 
        传统方式: 
            函数原型：void process_clops(short clops[][30], int rows); 
            函数调用：process_clops(clops, 10);
        变长数组方式: 
            函数原型：void process_clops(int rows, int cols, short clops[rows][cols]); 
            函数调用：process_clops(10, 30, clops);

    c. long shots[5] [10] [15]; 
        传统方式: 
            函数原型：void process_shots(long shots[][10][15], int rows); 
            函数调用：process_shots(shots, 5);
        变长数组方式: 
            函数原型：void process_shots(int rows, int cols, int depth, long shots[rows][cols][depth]); 
            函数调用：process_shots(5, 10, 15, shots);

*/