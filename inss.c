int main(int argc, char const *argv[])
{
    float salario, inss, ir, sal_liquido;
    printf("calculo de salario liquido com desconto do IR e INSS \n\n");
    printf("digite o seu salário Bruto \n");
    scanf("%f", &salario);

    printf("\nDigite seu trabalho bruto\n");

    if (salario<=1320)
        inss = salario *0.075;
    else if (salario>= 1320 && salario <= 2571.29)
        inss = salario * 0.09;
    else if (salario>=2571.30 && salario <= 2571.29)
        inss = salario * 0.09;
    else if (salario>= 3856.95 && salario <= 7507.49)
        inss = salario * 0.14;
    else
        inss = 1051.04; 
    
    if (salario <=1903.98)
        ir = salario *0;
    else if (salario >=  1903.99 && salario <= 2826.65)
        ir= salario *0.075;
    else if (salario >= 2826.66 && salario <= 3751.05)
        ir = salario *0.15;
    else if (salario >= 3751.06 && salario <= 4664.68)
        ir = salario * 0.225;
    else if (salario > 4664.69)
        ir = salario * 0.275;
    
    sal_liquido = (salario - inss) -ir;

    printf("\n Desconto do INSS e: %.2f\n\n", inss);
    printf("Desconto do imposto de renda e: %.2f\n\n", ir);
    printf("Salario liquido: %.2f\n\n", sal_liquido);

    return 0;
}
