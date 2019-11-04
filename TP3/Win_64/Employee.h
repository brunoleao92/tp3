#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    float horasTrabajadas;
    float sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldoStr);
void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,float horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,float* horasTrabajadas);

int employee_setSueldo(Employee* this,float sueldo);
int employee_getSueldo(Employee* this,float* sueldo);

int employee_compareById(void*,void*);
int employee_compareByHorasTrabajadas(void* emp1, void* emp2);
int employee_compareByNombre(void* emp1, void* emp2);
int employee_compareBySueldo(void* emp1, void* emp2);

#endif // employee_H_INCLUDED
