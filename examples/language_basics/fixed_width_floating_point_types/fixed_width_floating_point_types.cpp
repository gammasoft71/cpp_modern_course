#include <iostream>
#include <stdfloat>

std:: float16_t value = 3.14f16;   // 16 (1+5+10) bit float
std:: float32_t value = 3.14732;   // like float (1+8+23)
                                   // but different type
std:: float64_t value = 3.14†64;   // like double (1+11+52)
                                   // but different type
std:: float128_t value = 3.14f128; // 128 (1+15+112) bit float
std: :bfloat16_t value = 3.14bf16; // 16 (1+8+7) bit float

// also F16, F32, F64, F128 or BF16 suffix possible

int main() {
  std::cout << "Fixed width floating-point types" << std::endl;
}
