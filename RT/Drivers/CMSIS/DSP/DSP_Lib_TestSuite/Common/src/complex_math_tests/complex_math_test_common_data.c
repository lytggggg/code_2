??# i n c l u d e   " c o m p l e x _ m a t h _ t e s t _ d a t a . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n p u t / O u t p u t   B u f f e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 c o m p l e x _ m a t h _ o u t p u t _ f u t _ a ,  
                                 C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y ( 0 ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 c o m p l e x _ m a t h _ o u t p u t _ f u t _ b ,  
                                 C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y ( 0 ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 c o m p l e x _ m a t h _ o u t p u t _ r e f _ a ,  
                                 C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y ( 0 ) ) ;  
  
  
 A R R _ D E S C _ D E F I N E ( C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 c o m p l e x _ m a t h _ o u t p u t _ r e f _ b ,  
                                 C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y ( 0 ) ) ;  
  
  
 C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 c o m p l e x _ m a t h _ o u t p u t _ f 3 2 _ r e f _ a [ C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2 ] ;  
  
 C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 c o m p l e x _ m a t h _ o u t p u t _ f 3 2 _ r e f _ b [ C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2 ] ;  
  
 C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 c o m p l e x _ m a t h _ o u t p u t _ f 3 2 _ f u t _ a [ C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2 ] ;  
  
 C O M P L E X _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 c o m p l e x _ m a t h _ o u t p u t _ f 3 2 _ f u t _ b [ C O M P L E X _ M A T H _ M A X _ I N P U T _ E L E M E N T S   *   2 ] ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   B l o c k   S i z e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( u i n t 3 2 _ t ,  
                                 c o m p l e x _ m a t h _ b l o c k _ s i z e s ,  
                                 4 ,  
                                 C U R L Y ( 1 ,   2 ,   1 5 ,   3 2 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   T e s t   D a t a   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 c o m p l e x _ m a t h _ f _ 3 2 ,  
                                 3 2   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y (  
                                             - 0 . 4 3 2 5 6 4 8 1 1 5 2 8 2 2 0 6 8 0   , 	 0 . 8 1 5 6 2 2 2 8 8 8 7 6 1 4 3 3 0 0 , 	  
                                             - 1 . 6 6 5 5 8 4 3 7 8 2 3 8 0 9 7 0 0 0   , 	 0 . 7 1 1 9 0 8 3 2 3 5 0 0 8 9 3 2 8 0 , 	  
                                             0 . 1 2 5 3 3 2 3 0 6 4 7 4 8 3 0 6 8 0     , 	 1 . 2 9 0 2 4 9 7 5 4 9 3 2 4 7 7 0 0 0 , 	  
                                             0 . 2 8 7 6 7 6 4 2 0 3 5 8 5 4 8 8 5 0     , 	 0 . 6 6 8 6 0 0 5 0 5 6 8 2 0 4 0 3 2 0 , 	  
                                             - 1 . 1 4 6 4 7 1 3 5 0 6 8 1 4 6 3 7 0 0   , 	 1 . 1 9 0 8 3 8 0 7 4 2 4 3 3 6 9 1 0 0 , 	  
                                             1 . 1 9 0 9 1 5 4 6 5 6 4 2 9 9 8 8 0 0     , 	 - 1 . 2 0 2 4 5 7 1 1 4 7 7 3 9 4 4 0 0 0 , 	  
                                             1 . 1 8 9 1 6 4 2 0 1 6 5 2 1 0 3 1 0 0     , 	 - 0 . 0 1 9 7 8 9 5 5 7 7 6 8 7 7 0 4 4 9 , 	  
                                             - 0 . 0 3 7 6 3 3 2 7 6 5 9 3 3 1 7 6 4 5   , 	 - 0 . 1 5 6 7 1 7 2 9 8 8 3 1 9 8 0 6 8 0 , 	  
                                             0 . 3 2 7 2 9 2 3 6 1 4 0 8 6 5 4 1 4 0     , 	 - 1 . 6 0 4 0 8 5 5 6 2 0 0 1 1 5 8 5 0 0 , 	  
                                             0 . 1 7 4 6 3 9 1 4 2 8 2 0 9 2 4 5 2 0     , 	 0 . 2 5 7 3 0 4 2 3 4 6 7 7 4 8 9 8 6 0 , 	  
                                             - 0 . 1 8 6 7 0 8 5 7 7 6 8 1 4 3 9 3 6 0   , 	 - 1 . 0 5 6 4 7 2 9 2 8 0 8 1 4 8 2 4 0 0 , 	  
                                             0 . 7 2 5 7 9 0 5 4 8 2 9 3 3 0 2 7 0 0     , 	 1 . 4 1 5 1 4 1 4 8 5 8 7 2 3 3 8 6 0 0 , 	  
                                             - 0 . 5 8 8 3 1 6 5 4 3 0 1 4 1 8 8 6 8 0   , 	 - 0 . 8 0 5 0 9 0 4 0 4 1 9 6 8 7 9 8 3 0 , 	  
                                             2 . 1 8 3 1 8 5 8 1 8 1 9 7 1 0 1 1 0 0     , 	 0 . 5 2 8 7 4 3 0 1 0 9 6 2 2 2 4 8 7 0 , 	  
                                             - 0 . 1 3 6 3 9 5 8 8 3 0 8 6 5 9 5 7 0 0   , 	 0 . 2 1 9 3 2 0 6 7 2 6 6 7 6 2 2 3 7 0 , 	  
                                             0 . 1 1 3 9 3 1 3 1 3 5 2 0 8 0 9 6 2 0     , 	 - 0 . 9 2 1 9 0 1 6 2 4 3 5 5 5 3 9 1 3 0 , 	  
                                             1 . 0 6 6 7 6 8 2 1 1 3 5 9 1 8 8 8 0 0     , 	 - 2 . 1 7 0 6 7 4 4 9 4 3 0 5 2 6 2 5 0 0 , 	  
                                             0 . 0 5 9 2 8 1 4 6 0 5 2 3 6 0 5 3 4 8     , 	 - 0 . 0 5 9 1 8 7 8 2 4 5 2 1 1 9 1 1 8 0 , 	  
                                             - 0 . 0 9 5 6 4 8 4 0 5 4 8 3 6 6 9 0 4 1   , 	 - 1 . 0 1 0 6 3 3 7 0 6 4 7 4 2 4 7 4 0 0 , 	  
                                             - 0 . 8 3 2 3 4 9 4 6 3 6 5 0 0 2 2 4 9 0   , 	 0 . 6 1 4 4 6 3 0 4 8 8 9 5 4 8 0 9 8 0 , 	  
                                             0 . 2 9 4 4 1 0 8 1 6 3 9 2 6 4 0 3 8 0     , 	 0 . 5 0 7 7 4 0 7 8 5 3 4 1 9 8 5 5 2 0 , 	  
                                             - 1 . 3 3 6 1 8 1 8 5 7 9 3 7 8 0 4 0 0 0   , 	 1 . 6 9 2 4 2 9 8 7 0 1 9 0 5 2 1 4 0 0 , 	  
                                             0 . 7 1 4 3 2 4 5 5 1 8 1 8 9 5 2 1 6 0     , 	 0 . 5 9 1 2 8 2 5 8 6 9 2 4 1 7 5 9 0 0 , 	  
                                             1 . 6 2 3 5 6 2 0 6 4 4 4 6 2 7 0 7 0 0     , 	 - 0 . 6 4 3 5 9 5 2 0 2 6 8 2 5 2 6 1 2 0 , 	  
                                             - 0 . 6 9 1 7 7 5 7 0 1 7 0 2 2 8 6 7 5 0   , 	 0 . 3 8 0 3 3 7 2 5 1 7 1 3 9 1 0 1 4 0 , 	  
                                             0 . 8 5 7 9 9 6 6 7 2 8 2 8 2 6 2 6 4 0     , 	 - 1 . 0 0 9 1 1 5 5 2 4 3 4 0 7 8 5 0 0 0 , 	  
                                             1 . 2 5 4 0 0 1 4 2 1 6 0 2 5 3 2 4 0 0     , 	 - 0 . 0 1 9 5 1 0 6 6 9 5 3 0 2 8 9 2 9 3 , 	  
                                             - 1 . 5 9 3 7 2 9 5 7 6 4 4 7 4 7 6 8 0 0   , 	 - 0 . 0 4 8 2 2 0 7 8 9 1 4 5 3 1 2 2 6 9 , 	  
                                             - 1 . 4 4 0 9 6 4 4 3 1 9 0 1 0 2 0 0 0 0   , 	 0 . 0 0 0 0 4 3 1 9 1 8 4 1 6 2 5 5 4 5 , 	  
                                             0 . 5 7 1 1 4 7 6 2 3 6 5 8 1 7 7 9 5 0     , 	 - 0 . 3 1 7 8 5 9 4 5 1 2 4 7 6 8 7 8 9 0 , 	  
                                             - 0 . 3 9 9 8 8 5 5 7 7 7 1 5 3 6 3 1 5 0   , 	 1 . 0 9 5 0 0 3 7 3 8 7 8 7 4 9 2 5 0 0 , 	  
                                             0 . 6 8 9 9 9 7 3 7 5 4 6 4 3 4 5 1 4 0     , 	 - 1 . 8 7 3 9 9 0 2 5 7 6 4 0 9 6 0 8 0 0  
                                             ) ) ;  
  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( c o m p l e x _ m a t h _ f _ 1 5 ,  
                                               c o m p l e x _ m a t h _ f _ 3 2 ,  
                                               1 5   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ) ;  
  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( c o m p l e x _ m a t h _ f _ 2 ,  
                                               c o m p l e x _ m a t h _ f _ 3 2 ,  
                                               2   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ) ;  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 c o m p l e x _ m a t h _ z e r o s ,  
                                 3 2   *   2   / * C o m p l e x   d a t a   h a s   t w o   p a r t s * / ,  
                                 C U R L Y ( 0 ) ) ;  
  
 / *   A g g r e g a t e   a l l   f l o a t   d a t a s e t s   * /  
 A R R _ D E S C _ D E F I N E ( A R R _ D E S C _ t   * ,  
                                 c o m p l e x _ m a t h _ f _ a l l ,  
                                 4 ,  
                                 C U R L Y (  
                                             & c o m p l e x _ m a t h _ z e r o s ,  
                                             & c o m p l e x _ m a t h _ f _ 2 ,  
                                             & c o m p l e x _ m a t h _ f _ 1 5 ,  
                                             & c o m p l e x _ m a t h _ f _ 3 2  
                                             ) ) ;  