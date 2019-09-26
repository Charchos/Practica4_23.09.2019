Algoritmo Promedio
	
    Escribir "Ingrese la cantidad de calificaciones:"
    Leer n
    
    acum<-0
    
    Para i<-1 Hasta n Hacer
        Escribir "Ingrese la calificacion ",i,":"
        Leer dato
        acum<-acum+dato
    FinPara
    
    prom<-acum/n
    
    Escribir "El promedio es: ",prom
	
FinAlgoritmo
