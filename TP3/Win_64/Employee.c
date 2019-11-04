#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Employee.h"

int employee_compareById(void* emp1, void* emp2)
{
    int status=0;
    int id1;
    int id2;
    employee_getId((Employee*)emp1, &id1);
    employee_getId((Employee*)emp2, &id2);
    if(emp1 != NULL && emp2 !=NULL)
    {


        if(id1 > id2)
        {
            status=1;
        }

        else if(id1 < id2)
        {
            status=-1;
        }

    }

    return status;
}

int employee_compareByHorasTrabajadas(void* emp1, void* emp2)
{
    int status=0;
    Employee* e1;
    Employee* e2;

    if(emp1 != NULL && emp2 !=NULL)
    {
        e1=(Employee*)emp1;
        e2=(Employee*)emp2;

        if((e1->horasTrabajadas)>(e2->horasTrabajadas))
        {
            status=1;
        }

        if((e1->horasTrabajadas)<(e2->horasTrabajadas))
        {
            status=-1;
        }

        if((e1->horasTrabajadas)==(e2->horasTrabajadas))
        {
            status=0;
        }

    }

    return status;
}

int employee_compareBySueldo(void* emp1, void* emp2)
{
    int status=0;
    Employee* e1;
    Employee* e2;

    if(emp1 != NULL && emp2 !=NULL)
    {
        e1=(Employee*)emp1;
        e2=(Employee*)emp2;


        if((e1->sueldo)>(e2->sueldo))
        {
            status=1;
        }

        if((e1->sueldo)<(e2->sueldo))
        {
            status=-1;
        }

        if((e1->sueldo)==(e2->sueldo))
        {
            status=0;
        }

    }

    return status;
}

int employee_compareByNombre(void* emp1, void* emp2)
{
    int status=0;
    Employee* e1;
    Employee* e2;

    if(emp1 != NULL && emp2 !=NULL)
    {
        e1=(Employee*)emp1;
        e2=(Employee*)emp2;

        if((e1->nombre)>(e2->nombre))
        {
            status=1;
        }

        if((e1->nombre)<(e2->nombre))
        {
            status=-1;
        }

        if((e1->nombre)==(e2->nombre))
        {
            status=0;
        }
    }

    return status;
}

Employee* employee_new()
{
    Employee* empleado;
    empleado = malloc(sizeof(Employee));
    return empleado;
}

int employee_getHorasTrabajadas(Employee* this, float* horasTrabajadas)
{
    int status=-1;

    if(this!=NULL && horasTrabajadas > 0)
    {
        *horasTrabajadas=this->horasTrabajadas;
        status = 0;
    }
    return status;
}

int employee_setHorasTrabajadas(Employee* this, float horasTrabajadas)
{
    int status = -1;
    if (this !=  NULL && horasTrabajadas> 0)
    {
        this->horasTrabajadas=horasTrabajadas;
        status=0;
    }
    return status;
}

int employee_getId(Employee* this, int* id)
{
    int status = -1;

    if( this != NULL && id>0)
    {
        *id =this->id;
        status = 0;
    }
    return status;
}

int employee_setId(Employee* this, int id)
{
    status = -1;

    if(this != NULL && id>0)
    {
        this->id=id;
        status=0;
    }
    return status;
}

int employee_getNombre(Employee* this, char* nombre)
{
    int status = -1;

    if(this != NULL)
    {
        strcpy(nombre, this->nombre);
        status=0;
    }
    return status;
}



int employee_setNombre(Employee* this, char* nombre)
{
    status= -1;

    if( this != NULL)
    {
        strcpy(this->nombre,nombre);
        status=0;

    }
    return status;
}

int employee_getSueldo(Employee* this, float* sueldo)
{
    status=-1;
    if( this !=NULL && sueldo>0)
    {
        *sueldo=this->sueldo;
        status=0;
    }
    return status;
}

int employee_setSueldo(Employee* this, float sueldo)
{
    status = -1;

    if( this != NULL && sueldo > 0)
    {
        this->sueldo=sueldo;
        status =0;
    }
    return status;
}

Employee* employee_newParametros(char* idStr, char* nombreStr, char* horasTrabajadasStr, char* sueldoStr)
{
    int id;

    float horasTrabajadas;
    float sueldo;

    id= atoi(idStr);
    horasTrabajadas= atof(horasTrabajadasStr);
    sueldo= atof(sueldoStr);

    Employee* empleado = employee_new();
    if(empleado!=NULL)
    {
        employee_setId(empleado,id);
        employee_setNombre(empleado, nombreStr);
        employee_setHorasTrabajadas(empleado, horasTrabajadas);
        employee_setSueldo(empleado,sueldo);

    }

    return empleado;
}























