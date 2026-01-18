# student-manager-stl-list

# Student Manager (STL list)

## 🇺🇦 Опис (Ukrainian)

Цей проєкт є навчальним прикладом роботи з контейнером  
**std::list** зі стандартної бібліотеки шаблонів C++ (STL).

Метою проєкту було:
- закріпити роботу з контейнером `list`
- навчитися додавати, видаляти та шукати елементи
- порівняти підхід з аналогічною реалізацією на `std::vector`

Проєкт є окремою реалізацією, незалежною від версії з `vector`.

### Використані можливості `std::list`:
- `push_back`
- `remove_if`
- `empty`
- перебір елементів списку
- lambda-функції

---

## 🇬🇧 Description (English)

This project is a simple educational example of working with the  
**std::list** container from the C++ Standard Template Library (STL).

Project goals:
- practice using the `std::list` container
- implement add, delete and search operations
- compare this approach with a similar implementation using `std::vector`

This implementation is intentionally based on `std::list` to demonstrate
the differences between STL containers.

### Used `std::list` features:
- `push_back`
- `remove_if`
- `empty`
- list traversal
- lambda functions

---

## ▶️ How to run

Compile with any C++17-compatible compiler:

```bash
g++ student_manager_list.cpp -o student_list
./student_list
