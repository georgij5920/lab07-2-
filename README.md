# Laboratory work VII

Данная лабораторная работа посвящена изучению систем управления пакетами и CI/CD.

## Исправления

- Исправлена логика `Transaction::Make`: база вызывается только при успешной транзакции, откат выполняется корректно, списание разрешено при точном равенстве баланса и суммы.
- Исправлена конфигурация тестов: GoogleTest/GMock подключаются стабильно через CMake FetchContent.
- Исправлен workflow GitHub Actions для Linux GCC, Linux Clang и Windows MSVC.
- Добавлена пометка преподавателя: **Не прошел CI/CD**.

## Сборка

```bash
cmake -S . -B _build -DBUILD_TESTS=ON -DCMAKE_INSTALL_PREFIX=_install
cmake --build _build
ctest --test-dir _build --output-on-failure
cmake --build _build --target install
```
