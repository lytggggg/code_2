�?# i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " s u p p o r t _ t e s t _ d a t a . h "  
  
 # d e f i n e   M A X _ I N P U T _ E L E M E N T S   3 2  
 # d e f i n e   B I G G E S T _ I N P U T _ T Y P E   f l o a t 3 2 _ t  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n p u t / O u t p u t   B u f f e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( B I G G E S T _ I N P U T _ T Y P E ,  
                                 s u p p o r t _ o u t p u t _ f u t ,  
                                 M A X _ I N P U T _ E L E M E N T S ,  
                                 C U R L Y ( 0 ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( B I G G E S T _ I N P U T _ T Y P E ,  
                                 s u p p o r t _ o u t p u t _ r e f ,  
                                 M A X _ I N P U T _ E L E M E N T S ,  
                                 C U R L Y ( 0 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   B l o c k   S i z e s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *    
     T o   c h a n g e   t e s t   p a r a m e t e r   v a l u e s   a d d / r e m o v e   v a l u e s   i n s i d e   C U R L Y   a n d   u p d a t e    
     t h e   p r e c e e d i n g   p a r a m e t e r   t o   r e f l e c t   t h e   n u m b e r   o f   v a l u e s   i n s i d e   C U R L Y .    
 * /  
  
 A R R _ D E S C _ D E F I N E ( u i n t 3 2 _ t ,  
                                 s u p p o r t _ b l o c k _ s i z e s ,  
                                 4 ,  
                                 C U R L Y (   2 ,   7 ,   1 5 ,   3 2 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   N u m b e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( u i n t 3 2 _ t ,  
                                 s u p p o r t _ e l t s ,  
                                 4 ,  
                                 C U R L Y (   0 ,   1 ,   0 x 8 0 0 0 0 0 0 0 ,   0 x 7 f f f f f f f ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   T e s t   D a t a   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 s u p p o r t _ f _ 3 2 ,  
                                 3 2 ,  
                                 C U R L Y (  
                                             0 . 2 4 8 6 5 9 8 6   ,   - 0 . 1 3 3 6 4 2 2 7 ,   - 0 . 2 7 2 3 3 2 5 0   ,   - 7 . 3 3 4 8 8 2 0 0 ,  
                                             0 . 4 2 1 9 0 6 5 3   ,   1 . 1 7 4 3 5 8 8 0   ,   - 0 . 4 9 8 2 4 9 1 4   ,   0 . 8 7 8 8 3 6 6 3 ,  
                                             0 . 6 3 0 6 6 3 7 0   ,   1 . 8 0 2 7 5 6 8 0   ,   - 8 4 . 8 3 9 1 6 0 0 0 ,   - 2 . 0 6 7 7 3 8 0 0 ,  
                                             7 . 6 3 4 5 2 5 0 0   ,   1 . 0 1 4 8 7 6 1 0   ,   - 0 . 6 5 7 8 5 8 2 5   ,   1 . 7 8 0 1 9 0 3 0 ,  
                                             - 0 . 3 4 1 6 0 3 8 8 ,   0 . 6 8 5 4 6 0 5 0   ,   - 1 . 8 1 7 2 1 5 9 0   ,   - 0 . 1 0 3 4 0 4 5 3 ,  
                                             - 4 . 4 8 6 0 0 3 4 0 ,   - 1 . 6 9 7 6 3 4 8 0 ,   - 1 . 2 6 0 2 2 3 4 0   ,   - 1 . 5 8 4 5 7 4 8 0 ,  
                                             0 . 5 1 9 9 3 8 7 0   ,   2 . 8 3 5 2 6 4 7 0   ,   - 0 . 2 1 5 0 2 6 9 4   ,   - 0 . 5 7 6 9 0 3 4 6 ,  
                                             - 0 . 2 2 9 4 5 6 8 1 ,   0 . 7 9 5 0 9 3 8 3   ,   0 . 0 7 2 7 5 2 1 6     ,   - 2 . 1 6 2 7 9 0 8 0  
                                             ) ) ;  
  
 / *   A l i a s   t h e   3 2   e l e m e n t   a r r a y   w i t h   w r a p p e r s   t h a t   e n d   s o o n e r .   * /  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( s u p p o r t _ f _ 1 5 ,  
                                               s u p p o r t _ f _ 3 2 ,  
                                               1 5 ) ;  
  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( s u p p o r t _ f _ 2 ,  
                                               s u p p o r t _ f _ 3 2 ,  
                                               2 ) ;  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 s u p p o r t _ z e r o s ,  
                                 3 2 ,  
                                 C U R L Y ( 0 ) ) ;  
  
 / *   A g g r e g a t e   a l l   f l o a t   d a t a s e t s .   * /  
 A R R _ D E S C _ D E F I N E ( A R R _ D E S C _ t   * ,  
                                 s u p p o r t _ f _ a l l ,  
                                 4 ,  
                                 C U R L Y (  
                                             & s u p p o r t _ z e r o s ,  
                                             & s u p p o r t _ f _ 2 ,  
                                             & s u p p o r t _ f _ 1 5 ,  
                                             & s u p p o r t _ f _ 3 2  
                                             ) ) ;  