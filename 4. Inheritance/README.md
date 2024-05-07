# Cơ chế Overriding

- Overriding là một cơ chế cho phép một lớp con ghi đè phương thức của lớp cha.
- Khi một phương thức của lớp con ghi đè phương thức của lớp cha, phương thức của lớp con sẽ được gọi thay vì phương thức của lớp cha.
- Để ghi đè một phương thức, phương thức của lớp con phải có cùng tên, cùng tham số và cùng kiểu trả về với phương thức của lớp cha.
- Hàm khởi tạo không thể ghi đè.

# Protected

- Phương thức hoặc thuộc tính được khai báo với từ khóa protected sẽ chỉ được truy cập từ bên trong lớp đó hoặc từ lớp kế thừa từ lớp đó.
- Protected giúp bảo vệ dữ liệu của lớp cha khỏi việc truy cập từ bên ngoài.
- Protected không cho phép truy cập từ bên ngoài nhưng cho phép truy cập từ bên trong lớp đó hoặc từ lớp kế thừa từ lớp đó.

- Khi kế thừa từ lớp cha, thì nó khởi tạo classParent trước rồi mới khởi tạo classChild.

- Với hàm khởi tạo không có tham số thì nó sẽ tự động gọi hàm khởi tạo của lớp cha.
- Với hàm khởi tạo có tham số thì nó sẽ không tự động gọi hàm khởi tạo của lớp cha, mà phải gọi hàm khởi tạo của lớp cha bằng từ khóa parent::\_\_construct().

* Cách 1: Cung cấp lại hàm khởi tạo mặc định trong classParent
* Cách 2:

# Destructor trong quan hệ Inheritance
- Sẽ xóa trong thứ tự ngược lại so với Constructor.

# Đa thừa kế trong OOP C++
- Đa thừa kế là một lớp có thể kế thừa từ nhiều lớp khác.
- Trong C++, một lớp chỉ có thể kế thừa từ một lớp cha duy nhất.
- Để giải quyết vấn đề này, C++ cung cấp một cơ chế khác để thực hiện đa thừa kế, đó là Interface.

- 