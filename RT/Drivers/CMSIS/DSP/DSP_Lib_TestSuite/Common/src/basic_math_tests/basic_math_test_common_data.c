??# i n c l u d e   " b a s i c _ m a t h _ t e s t _ d a t a . h "  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   I n p u t / O u t p u t   B u f f e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( B A S I C _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 b a s i c _ m a t h _ o u t p u t _ f u t ,  
                                 B A S I C _ M A T H _ M A X _ I N P U T _ E L E M E N T S ,  
                                 C U R L Y ( 0 ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( B A S I C _ M A T H _ B I G G E S T _ I N P U T _ T Y P E ,  
                                 b a s i c _ m a t h _ o u t p u t _ r e f ,  
                                 B A S I C _ M A T H _ M A X _ I N P U T _ E L E M E N T S ,  
                                 C U R L Y ( 0 ) ) ;  
  
 B A S I C _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 b a s i c _ m a t h _ o u t p u t _ f 3 2 _ r e f [ B A S I C _ M A T H _ M A X _ I N P U T _ E L E M E N T S ] ;  
  
 B A S I C _ M A T H _ B I G G E S T _ I N P U T _ T Y P E  
 b a s i c _ m a t h _ o u t p u t _ f 3 2 _ f u t [ B A S I C _ M A T H _ M A X _ I N P U T _ E L E M E N T S ] ;  
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
                                 b a s i c _ m a t h _ b l o c k _ s i z e s ,  
                                 4 ,  
                                 C U R L Y (   2 ,   7 ,   1 5 ,   3 2 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   N u m b e r s   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 / *    
     T o   c h a n g e   t e s t   p a r a m e t e r   v a l u e s   a d d / r e m o v e   v a l u e s   i n s i d e   C U R L Y   a n d   u p d a t e    
     t h e   p r e c e e d i n g   p a r a m e t e r   t o   r e f l e c t   t h e   n u m b e r   o f   v a l u e s   i n s i d e   C U R L Y .    
 * /  
  
 A R R _ D E S C _ D E F I N E ( u i n t 3 2 _ t ,  
                                 b a s i c _ m a t h _ e l t s ,  
                                 4 ,  
                                 C U R L Y (   0 ,   1 ,   0 x 8 0 0 0 0 0 0 0 ,   0 x 7 f f f f f f f ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( i n t 8 _ t ,  
                                 b a s i c _ m a t h _ e l t s 2 ,  
                                 5 ,  
                                 C U R L Y (   0 ,   3 ,   - 3 ,   - 7 ,   7 ) ) ;  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 b a s i c _ m a t h _ e l t s f ,  
                                 6 ,  
                                 C U R L Y (   0 . 0 f ,   1 . 0 f ,   1 . 2 5 4 0 0 1 ,   - 1 . 6 6 5 5 8 4 ,   - 1 2 7 . 4 3 5 6 4 6 ,   2 4 5 . 3 4 6 3 4 2 6 7 ) ) ;  
  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   T e s t   D a t a   * /  
 / * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 b a s i c _ m a t h _ f _ 3 2 ,  
                                 3 2 ,  
                                 C U R L Y (  
                                             - 0 . 4 3 2 5 6 5 ,   - 1 . 6 6 5 5 8 4 ,     0 . 1 2 5 3 3 2 ,     0 . 2 8 7 6 7 6 ,   - 1 . 1 4 6 4 7 1 ,  
                                               1 . 1 9 0 9 1 5 ,     1 . 1 8 9 1 6 4 ,   - 0 . 0 3 7 6 3 3 ,     0 . 3 2 7 2 9 2 ,     0 . 1 7 4 6 3 9 ,  
                                             - 0 . 1 8 6 7 0 9 ,     0 . 7 2 5 7 9 1 ,   - 0 . 5 8 8 3 1 7 ,     2 . 1 8 3 1 8 6 ,   - 0 . 1 3 6 3 9 6 ,  
                                               0 . 1 1 3 9 3 1 ,     1 . 0 6 6 7 6 8 ,     0 . 0 5 9 2 8 1 ,   - 0 . 0 9 5 6 4 8 ,   - 0 . 8 3 2 3 4 9 ,  
                                               0 . 2 9 4 4 1 1 ,   - 1 . 3 3 6 1 8 2 ,     0 . 7 1 4 3 2 5 ,     1 . 6 2 3 5 6 2 ,   - 0 . 6 9 1 7 7 6 ,  
                                               0 . 8 5 7 9 9 7 ,     1 . 2 5 4 0 0 1 ,   - 1 . 5 9 3 7 3 0 ,   - 1 . 4 4 0 9 6 4 ,     0 . 5 7 1 1 4 8 ,  
                                             - 0 . 3 9 9 8 8 6 ,     0 . 6 8 9 9 9 7  
                                             ) ) ;  
  
 / *   A l i a s   t h e   3 2   e l e m e n t   a r r a y   w i t h   w r a p p e r s   t h a t   e n d   s o o n e r .   * /  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( b a s i c _ m a t h _ f _ 1 5 ,  
                                               b a s i c _ m a t h _ f _ 3 2 ,  
                                               1 5 ) ;  
  
 A R R _ D E S C _ D E F I N E _ S U B S E T ( b a s i c _ m a t h _ f _ 2 ,  
                                               b a s i c _ m a t h _ f _ 3 2 ,  
                                               2 ) ;  
  
 A R R _ D E S C _ D E F I N E ( f l o a t 3 2 _ t ,  
                                 b a s i c _ m a t h _ z e r o s ,  
                                 3 2 ,  
                                 C U R L Y ( 0 ) ) ;  
  
 / *   A g g r e g a t e   a l l   f l o a t   d a t a s e t s .   * /  
 A R R _ D E S C _ D E F I N E ( A R R _ D E S C _ t   * ,  
                                 b a s i c _ m a t h _ f _ a l l ,  
                                 4 ,  
                                 C U R L Y (  
                                             & b a s i c _ m a t h _ z e r o s ,  
                                             & b a s i c _ m a t h _ f _ 2 ,  
                                             & b a s i c _ m a t h _ f _ 1 5 ,  
                                             & b a s i c _ m a t h _ f _ 3 2  
                                             ) ) ;  