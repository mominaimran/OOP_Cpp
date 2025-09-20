🌍 General Overview — Inheritance kya hai?

**Definition (short & sweet):
Inheritance ek mechanism hai jahan ek class (child/derived) ek dusri class (parent/base) ke properties aur behaviors (data + functions) ko inherit krti hai.

**Why tho?
Code reuse (same cheez bar bar likhni nahi).
Real-world modeling (e.g., "Car is a Vehicle").
Scalability (bari systems mein structure aur hierarchy easy hoti hai).
Extensibility (purana code modify kiye bina naye features add kr skte ho).
Example (real life):
Parent: Vehicle → properties: wheels, speed, fuel.
Child: Car, Bike, Truck → inherit properties, but apni extra cheezen add krte hain (Car → AC, Bike → helmet).

🧩 Types of Inheritance

Inheritance ke kuch flavors hote hain, like ice-cream 🍦:

->Single Inheritance
Ek child ek parent se inherit krta hai.
Example: Car inherits from Vehicle.

->Multiple Inheritance
Ek child multiple parents se inherit krta hai.
Example: FlyingCar inherits from Car + Airplane.

->Multilevel Inheritance
Ek chain banti hai (parent → child → grandchild).
Example: Vehicle → Car → ElectricCar.

->Hierarchical Inheritance
Ek parent se multiple children inherit karte hain.
Example: Vehicle → Car, Bike, Truck.

->Hybrid Inheritance
Mix of different types (zyada tar multiple + multilevel ka combo).
Example: Vehicle → Car, Bike and then FlyingCar (Car + Airplane ka child).

⚡ Real World Need
Banking Systems: Account → SavingAccount, CurrentAccount.
E-commerce: Product → Electronics, Clothes, Books.
Universities: Person → Student, Teacher → HOD.
Games: Character → Player, Enemy → BossEnemy.