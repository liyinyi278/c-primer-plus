/* 
    下面的函数定义是否正确？
        void salami(num)
        {
            int num, count;
            for (count = 1; count <= num; num++)
                printf(" O salami mio!\n");
        }
*/

/* 
    以上的函数定义不正确，具体原因如下：
        1、函数的参数列表中的num缺少参数类型声明，
            应该修改为：void salami(int num)。
        2、函数参数num和函数体内部的变量命名冲突，
            可以将函数体内命名的num删除。
        3、for (count = 1; count <= num; num++)这行代码中，
            修改了循环变量num的值，这会导致循环无法正常结束。
            应该修改为：for (count = 1; count <= num; count++)
*/