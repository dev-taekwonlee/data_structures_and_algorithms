class Binary:
    def __init__(self, number=0):
        self.number = number

    def __str__(self):
        return "".join(str(num) for num in self.number)

    def __repr__(self):
        return list(self)

    def __len__(self):
        return len(self.number)

    def __add__(self, other):
        if not isinstance(other, Binary):
            raise Exception("should not be different type.")
        str1 = "".join(str(num) for num in self.number)
        str2 = "".join(str(num) for num in other.number)
        add_ = bin(int(str1, 2) + int(str2, 2))
        return Binary(add_[2:])

    def __setitem__(self, id, number):
        self.number[id] = number

    def __getitem__(self, id):
        return self.number[id]
