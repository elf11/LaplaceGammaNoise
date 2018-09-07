#pragma once
extern double laplace_mechanism(double true_answer, double sensitivity = 1, double epsilon = 1 /* sensitivity valid only for true binary values 0/1 reported by clients, no binary maps */);
