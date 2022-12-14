??/ *  
   *   C o p y r i g h t   ( C )   2 0 1 0 - 2 0 1 8   A r m   L i m i t e d   o r   i t s   a f f i l i a t e s .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   * /  
  
 / *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *   P r o j e c t :             C M S I S   N N   L i b r a r y  
   *   T i t l e :                 a r m _ n n s u p p o r t f u n c t i o n s . h  
   *   D e s c r i p t i o n :     P u b l i c   h e a d e r   f i l e   o f   s u p p o r t   f u n c t i o n s   f o r   C M S I S   N N   L i b r a r y  
   *  
   *   $ D a t e :                 1 3 .   J u l y   2 0 1 8  
   *   $ R e v i s i o n :         V . 1 . 0 . 0  
   *  
   *   T a r g e t   P r o c e s s o r :     C o r t e x - M   c o r e s  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -   * /  
  
 # i f n d e f   _ A R M _ N N S U P P O R T F U N C T I O N S _ H _  
 # d e f i n e   _ A R M _ N N S U P P O R T F U N C T I O N S _ H _  
  
 # i n c l u d e   " a r m _ m a t h . h "  
 # i n c l u d e   " a r m _ c o m m o n _ t a b l e s . h "  
 / / # i n c l u d e   < c s t r i n g >  
  
 # i f d e f   _ _ c p l u s p l u s  
 e x t e r n         " C "  
 {  
 # e n d i f  
  
 / * *  
   *   @ b r i e f   U n i o n   f o r   S I M D   a c c e s s   o f   Q 3 1 / Q 1 5 / Q 7   t y p e s  
   * /  
 u n i o n   a r m _ n n w o r d  
 {  
         q 3 1 _ t           w o r d ;  
                               / * * <   Q 3 1   t y p e   * /  
         q 1 5 _ t           h a l f _ w o r d s [ 2 ] ;  
                               / * * <   Q 1 5   t y p e   * /  
         q 7 _ t             b y t e s [ 4 ] ;  
                               / * * <   Q 7   t y p e   * /  
 } ;  
  
 / * *  
   *   @ b r i e f   S t r u c t   f o r   s p e c i f y i n g   a c t i v a t i o n   f u n c t i o n   t y p e s  
   *  
   * /  
 t y p e d e f   e n u m  
 {  
         A R M _ S I G M O I D   =   0 ,  
                                 / * * <   S i g m o i d   a c t i v a t i o n   f u n c t i o n   * /  
         A R M _ T A N H   =   1 ,  
                           / * * <   T a n h   a c t i v a t i o n   f u n c t i o n   * /  
 }   a r m _ n n _ a c t i v a t i o n _ t y p e ;  
  
 / * *  
   *   @ d e f g r o u p   n n d a t a _ c o n v e r t   N e u r a l   N e t w o r k   D a t a   C o n v e r s i o n   F u n c t i o n s  
   *  
   *   P e r f o r m   d a t a   t y p e   c o n v e r s i o n   i n - b e t w e e n   n e u r a l   n e t w o r k   o p e r a t i o n s  
   *  
   * /  
  
 / * *  
   *   @ b r i e f   C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 7   v e c t o r   t o   Q 1 5   v e c t o r   w i t h o u t   l e f t - s h i f t    
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   Q 7   i n p u t   v e c t o r          
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   t h e   Q 1 5   o u t p u t   v e c t o r        
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r          
   *   @ r e t u r n   n o n e .          
   *  
   * /  
  
 v o i d             a r m _ q 7 _ t o _ q 1 5 _ n o _ s h i f t ( c o n s t   q 7 _ t   *   p S r c ,   q 1 5 _ t   *   p D s t ,   u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 / * *  
   *   @ b r i e f     C o n v e r t s   t h e   e l e m e n t s   o f   t h e   Q 7   v e c t o r   t o   r e o r d e r e d   Q 1 5   v e c t o r   w i t h o u t   l e f t - s h i f t  
   *   @ p a r a m [ i n ]               * p S r c   p o i n t s   t o   t h e   Q 7   i n p u t   v e c t o r          
   *   @ p a r a m [ o u t ]             * p D s t   p o i n t s   t o   t h e   Q 1 5   o u t p u t   v e c t o r        
   *   @ p a r a m [ i n ]               b l o c k S i z e   l e n g t h   o f   t h e   i n p u t   v e c t o r          
   *   @ r e t u r n   n o n e .          
   *  
   * /  
  
 v o i d             a r m _ q 7 _ t o _ q 1 5 _ r e o r d e r e d _ n o _ s h i f t ( c o n s t   q 7 _ t   *   p S r c ,   q 1 5 _ t   *   p D s t ,   u i n t 3 2 _ t   b l o c k S i z e ) ;  
  
 # i f   d e f i n e d   ( A R M _ M A T H _ D S P )  
  
 / * *  
   *   @ b r i e f   r e a d   a n d   e x p a n d   o n e   Q 7   w o r d   i n t o   t w o   Q 1 5   w o r d s  
   * /  
  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   * r e a d _ a n d _ p a d ( v o i d   * s o u r c e ,   q 3 1 _ t   *   o u t 1 ,   q 3 1 _ t   *   o u t 2 )  
 {  
                 q 3 1 _ t           i n A   =   * _ _ S I M D 3 2 ( s o u r c e ) + + ;  
                 q 3 1 _ t           i n A b u f 1   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A ,   8 ) ) ;  
                 q 3 1 _ t           i n A b u f 2   =   _ _ S X T B 1 6 ( i n A ) ;  
  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
                 * o u t 2   =   _ _ P K H T B ( i n A b u f 1 ,   i n A b u f 2 ,   1 6 ) ;  
                 * o u t 1   =   _ _ P K H B T ( i n A b u f 2 ,   i n A b u f 1 ,   1 6 ) ;  
 # e l s e  
                 * o u t 1   =   _ _ P K H T B ( i n A b u f 1 ,   i n A b u f 2 ,   1 6 ) ;  
                 * o u t 2   =   _ _ P K H B T ( i n A b u f 2 ,   i n A b u f 1 ,   1 6 ) ;  
 # e n d i f  
  
                 r e t u r n   s o u r c e ;  
 }  
  
 / * *  
   *   @ b r i e f   r e a d   a n d   e x p a n d   o n e   Q 7   w o r d   i n t o   t w o   Q 1 5   w o r d s   w i t h   r e o r d e r i n g  
   * /  
  
 _ _ S T A T I C _ F O R C E I N L I N E   v o i d   * r e a d _ a n d _ p a d _ r e o r d e r e d ( v o i d   * s o u r c e ,   q 3 1 _ t   *   o u t 1 ,   q 3 1 _ t   *   o u t 2 )  
 {  
                 q 3 1 _ t           i n A   =   * _ _ S I M D 3 2 ( s o u r c e ) + + ;  
 # i f n d e f   A R M _ M A T H _ B I G _ E N D I A N  
                 * o u t 2   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A ,   8 ) ) ;  
                 * o u t 1   =   _ _ S X T B 1 6 ( i n A ) ;  
 # e l s e  
                 * o u t 1   =   _ _ S X T B 1 6 ( _ _ R O R ( i n A ,   8 ) ) ;  
                 * o u t 2   =   _ _ S X T B 1 6 ( i n A ) ;  
 # e n d i f  
  
                 r e t u r n   s o u r c e ;  
 }  
 # e n d i f  
  
 / * *  
   *   @ d e f g r o u p   N N B a s i c M a t h   B a s i c   M a t h   F u n c t i o n s   f o r   N e u r a l   N e t w o r k   C o m p u t a t i o n  
   *  
   *   B a s i c   M a t h   F u n c t i o n s   f o r   N e u r a l   N e t w o r k   C o m p u t a t i o n  
   *  
   * /  
  
 / * *  
   *   @ b r i e f                       Q 7   v e c t o r   m u l t i p l i c a t i o n   w i t h   v a r i a b l e   o u t p u t   s h i f t s  
   *   @ p a r a m [ i n ]               * p S r c A                 p o i n t e r   t o   t h e   f i r s t   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               * p S r c B                 p o i n t e r   t o   t h e   s e c o n d   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p D s t                   p o i n t e r   t o   t h e   o u t p u t   v e c t o r  
   *   @ p a r a m [ i n ]               o u t _ s h i f t           a m o u n t   o f   r i g h t - s h i f t   f o r   o u t p u t  
   *   @ p a r a m [ i n ]               b l o c k S i z e           n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   f u n c t i o n   u s e s   s a t u r a t i n g   a r i t h m e t i c .  
   *   R e s u l t s   o u t s i d e   o f   t h e   a l l o w a b l e   Q 1 5   r a n g e   [ 0 x 8 0 0 0   0 x 7 F F F ]   w i l l   b e   s a t u r a t e d .  
   * /  
  
 v o i d   a r m _ n n _ m u l t _ q 1 5 (  
     q 1 5 _ t   *   p S r c A ,  
     q 1 5 _ t   *   p S r c B ,  
     q 1 5 _ t   *   p D s t ,  
     c o n s t   u i n t 1 6 _ t   o u t _ s h i f t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
      
 / * *  
   *   @ b r i e f                       Q 7   v e c t o r   m u l t i p l i c a t i o n   w i t h   v a r i a b l e   o u t p u t   s h i f t s  
   *   @ p a r a m [ i n ]               * p S r c A                 p o i n t e r   t o   t h e   f i r s t   i n p u t   v e c t o r  
   *   @ p a r a m [ i n ]               * p S r c B                 p o i n t e r   t o   t h e   s e c o n d   i n p u t   v e c t o r  
   *   @ p a r a m [ o u t ]             * p D s t                   p o i n t e r   t o   t h e   o u t p u t   v e c t o r  
   *   @ p a r a m [ i n ]               o u t _ s h i f t           a m o u n t   o f   r i g h t - s h i f t   f o r   o u t p u t  
   *   @ p a r a m [ i n ]               b l o c k S i z e           n u m b e r   o f   s a m p l e s   i n   e a c h   v e c t o r  
   *   @ r e t u r n   n o n e .  
   *  
   *   < b > S c a l i n g   a n d   O v e r f l o w   B e h a v i o r : < / b >  
   *   \ p a r  
   *   T h e   f u n c t i o n   u s e s   s a t u r a t i n g   a r i t h m e t i c .  
   *   R e s u l t s   o u t s i d e   o f   t h e   a l l o w a b l e   Q 7   r a n g e   [ 0 x 8 0   0 x 7 F ]   w i l l   b e   s a t u r a t e d .  
   * /  
  
 v o i d   a r m _ n n _ m u l t _ q 7 (  
     q 7 _ t   *   p S r c A ,  
     q 7 _ t   *   p S r c B ,  
     q 7 _ t   *   p D s t ,  
     c o n s t   u i n t 1 6 _ t   o u t _ s h i f t ,  
     u i n t 3 2 _ t   b l o c k S i z e ) ;  
    
 / * *  
   *   @ b r i e f   d e f i t i o n   t o   a d d i n g   r o u d i n g   o f f s e t  
   * /  
 # i f n d e f   A R M _ N N _ T R U N C A T E  
         # d e f i n e   N N _ R O U N D ( o u t _ s h i f t )   (   0 x 1   < <   ( o u t _ s h i f t   -   1 )   )  
 # e l s e  
         # d e f i n e   N N _ R O U N D ( o u t _ s h i f t )   0  
 # e n d i f  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f  