/* 
    根据下面各函数的描述,分别编写它们的ANSIC函数头。注意,只需写出函数头,不用写函数体。 
        a. n_to_char（)接受一个 int 类型的参数，返回一个 char 类型的值 
        b. digit ()接受一个 double类型的参数和一个 int 类型的参数，返回一个 int 类型的值 
        c. which()接受两个可储存double类型变量的地址,返回一个double类型的地址
        d. random()不接受参数,返回一个 int类型的值
*/

/* a. n_to_char（)接受一个 int 类型的参数，返回一个 char 类型的值  */
char n_to_char(int n);

/* b. digit ()接受一个 double类型的参数和一个 int 类型的参数，返回一个 int 类型的值  */
int digit(double d, int n);

/* c. which()接受两个可储存double类型变量的地址,返回一个double类型的地址 */
double *which(double *a, double *b);

/* d. random()不接受参数,返回一个 int类型的值 */
int random(void);