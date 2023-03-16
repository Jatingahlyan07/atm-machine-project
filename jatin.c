class ATM:
    def __init__(self, balance=0):
        self.balance = balance

    def check_balance(self):
        print("Your account balance is ${:.2f}".format(self.balance))

    def deposit(self, amount):
        self.balance += amount
        print("${:.2f} has been deposited into your account. Your new balance is ${:.2f}".format(amount, self.balance))

    def withdraw(self, amount):
        if amount > self.balance:
            print("Insufficient funds.")
        else:
            self.balance -= amount
            print("${:.2f} has been withdrawn from your account. Your new balance is ${:.2f}".format(amount, self.balance))

# example usage
my_atm = ATM(1000) # create an ATM object with an initial balance of $1000
my_atm.check_balance() # prints "Your account balance is $1000.00"
my_atm.deposit(500) # prints "$500.00 has been deposited into your account. Your new balance is $1500.00"
my_atm.withdraw(200) # prints "$200.00 has been withdrawn from your account. Your new balance is $1300.00"
my_atm.withdraw(1500) # prints "Insufficient funds."
// hello world
