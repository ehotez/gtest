[![CI/CD GitHub Actions](https://github.com/ehotez/gtest/actions/workflows/test-action.yml/badge.svg)](https://github.com/ehotez/gtest/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/ehotez/gtest/badge.svg?branch=main)](https://coveralls.io/github/ehotez/gtest?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=ehotez_gtest&metric=alert_status)](https://sonarcloud.io/dashboard?id=ehotez_gtest)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=ehotez_gtest&metric=code_smells)](https://sonarcloud.io/dashboard?id=ehotez_gtest)

# План тестирования

Все тесты расположены в папке tests в файле quad_equation.h

1. Проверка вычисления корней квадратного уравнения с двумя действительными корнями:  
Входные данные: a = 1.0, b = -3.0, c = 2.0.  
Ожидаемый результат: x1 = 1.0, x2 = 2.0, count = 2

2. Проверка вычисления корней квадратного уравнения с одним действительным корнем:  
Входные данные: a = 1.0, b = -4.0, c = 4.0.  
Ожидаемый результат: x1 = 2.0, x2 = 2.0, count = 1

3. Проверка вычисления корней квадратного уравнения без действительных корней:  
Входные данные: a = 1.0, b = 2.0, c = 3.0.  
Ожидаемый результат: count = 0

4. Проверка вычисления корней квадратного уравнения с отрицательным коэффициентом a:  
Входные данные: a = -1.0, b = 2.0, c = 3.0.  
Ожидаемый результат: x1 = 3.0, x2 = -1.0, count = 2

5. Проверка вычисления корней квадратного уравнения с нулевым коэффициентом a:  
Входные данные: a = 0.0, b = 2.0, c = 3.0.  
Ожидаемый результат: count = 0

6. Проверка вычисления корней квадратного уравнения с нулевым коэффициентом b:  
Входные данные: a = 1.0, b = 0.0, c = 3.0.  
Ожидаемый результат: count = 0

7. Проверка вычисления корней квадратного уравнения с нулевым коэффициентом c:  
Входные данные: a = 1.0, b = 2.0, c = 0.0.  
Ожидаемый результат: x1 = -2.0, x2 = 0.0, count = 2



