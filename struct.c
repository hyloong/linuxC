#include<stdio.h>
#include<string.h>

struct date{
    int year;
    int month;
    int day;
};

struct person{
    char name[19];
    int age;
    char sex;
    char phone[15];
    struct date birthday;
    char *string;
}; //p1, p2; // 定义离情歌结构体变量

struct student{
    int number;
    char name[20];
    char sex;
    int age;
    char addr[30];
};

void print_struct(struct student *p){
    p->age ++;
    printf("%d, %s, %c, %d, %s\n", p->number, p->name, p->sex, p->age, p->addr);
}

int main(){
    // struct person p1, p2;
    // strcpy(p1.name, "dyx");
    // p1.age = 21;
    // p1.sex = 'w';
    // strcpy(p1.phone, "123456789");
    // p1.birthday.year = 1994;
    // printf("name = %s\n", p1.name);
    // p2 = {"hhl", 26, 'm', "123456789", {1990, 2, 26}, "haha"};
    // p2 = { "hhl", 26, 'm', "123456789" };        
    // printf("%s\n", p2);
    // printf("%d\n", sizeof(p1));

    struct student s[3] = {{10000, "Zhang", 'm', 21, "shang hai"},{10001, "Li", 'f', 20, "Beijing"}};
    s[2].number = 10002;
    s[2].sex = 'm';
    s[2].age = 22;
    strcpy(s[2].name, "Du");
    strcpy(s[2].addr, "Guangdong");
    struct student *p;

    for(p=s; p<s+3; p++){
        // printf("%d, %s, %c, %d, %s\n", p->number, p->name, p->sex, p->age, p->addr);
        print_struct(p);
    }
    // printf("%d, %s, %c, %d, %s\n", s[2].number, s[2].name, s[2].sex, s[2].age, s[2].addr);
    printf("Age:%d, %d, %d\n", s[0].age, s[1].age, s[2].age);
    return 0;
}
