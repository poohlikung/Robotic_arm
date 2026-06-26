lcd.createChar(0, customChar1);
  lcd.home();
  lcd.setCursor(1, 1);
  lcd.createChar(1, customChar1);
  lcd.home();

  lcd.setCursor(2, 1);
  lcd.createChar(2, customChar2);
  lcd.home();

  lcd.setCursor(4, 1);
  lcd.createChar(3, customChar3);
  lcd.home();
  lcd.setCursor(3, 1);

  lcd.createChar(4, customChar4);
  lcd.home();
  lcd.setCursor(4, 1);

  lcd.createChar(5, customChar5);
  lcd.home();
  lcd.setCursor(5, 1);

  lcd.createChar(6, customChar6);
  lcd.home();
  lcd.setCursor(6, 1);

  ///เรียกใช้จอ/////
  lcd.write(0);
  lcd.write(1);
  lcd.write(2);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(6);
