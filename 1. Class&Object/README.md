# Introduce

    Cấp phát tĩnh:
        + Kích thước của mảng hoặc đối tượng tĩnh được xác định tại thời điểm biên dịch
        và không thể thay đổi trong quá trình chạy
        + Được cấp vùng nhớ trong vùng nhớ Stack, dung lượng nhỏ ~1Mb
        + Tốc độ truy cập nhanh hơn
        + Thường được cấp phát cho các biến nguyên thủy( int, bool, char,...)

    Cấp phát động:
        + Kích thước của mảng hoặc đối tượng động có thể được xác định
        và thay đổi trong quá trình chạy của chương trình.
        + Được cấp vùng nhớ trong vùng nhớ Heap, dung lượng lớn
        + Tốc độ truy cập chậm hơn
        + Thường được cấp phát cho các biến kiểu dữ liệu phức tạp như mảng, struct, class

---

# Method

    - Tham số mặc định luôn để phía sau các tham số bình thường
    - Kiểu trả về: int, string, 1 class,...
    - Nạp chồng hàm
    - Lỗi ambigous: khi 2 hàm có cùng tên, cùng kiểu trả về, cùng số lượng tham số, nhưng khác kiểu dữ liệu của tham    số
    - Operator overloading (toán tử nạp chồng)
    - Sự liên quan sữ propety và method trong class (class và object):
        + Property: thuộc tính của class
        + Method: phương thức của class
        + Object: là một thể hiện của class
        + Class: là một khuôn mẫu để tạo ra object
        + Khi tạo ra object từ class, object sẽ có các property và method của class
        + Property và method của class có thể được truy cập thông qua object
        + Property và method của class có thể được truy cập thông qua con trỏ object

---

# Constructor

    - Biến bất định ( infinity variable)
    - Biến bất định là biến mà giá trị của nó không được xác định ngay từ đầu
    - Biến bất định không được sử dụng trước khi gán giá trị cho nó
    - Biến bất định có thể gây ra lỗi nếu không được gán giá trị trước khi sử dụng

---

# Property

    Bản chất class là version "nâng cấp" của struct
    - Class có thể chứa các phương thức (method) và thuộc tính (property)
    - Struct chỉ chứa thuộc tính (property)
    - Struct và Class đều có thể chứa các biến, hàm, phương thức, thuộc tính
    - Struct và Class đều có thể kế thừa từ 1 class khác
    - Struct và Class đều có thể implement interface

---

# Constructor

     - Hàm khởi tạo
      + Khởi tạo giá trị cho các biến thành viên
      + Tham số cho ham khởi tạo
      + Có tính chất nạp chồng hàm
    - Hàm hủy
      + Cần thu hồi vùng nhớ đã cấp phát (Heap)
      + Chỉ có tác dụng với cấp phát động
      + Khi cấp phát tĩnh thì nó sẽ thoát khi kết thúc hàm đó
      + Khi cấp phát tĩnh thì thoát scope thì nó sẽ tự thu hồi

---

# More

     - Bản chất class là version "nâng cấp" của struct
    + Class có thể chứa các phương thức (method) và thuộc tính (property)
    + Struct chỉ chứa thuộc tính (property)
    + Struct và Class đều có thể chứa các biến, hàm, phương thức, thuộc tính
    + Struct và Class đều có thể kế thừa từ 1 class khác
    + Struct và Class đều có thể implement interface
