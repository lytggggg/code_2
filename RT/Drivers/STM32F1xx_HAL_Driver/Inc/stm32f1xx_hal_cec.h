??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ c e c . h  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       H e a d e r   f i l e   o f   C E C   H A L   m o d u l e .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *      
     * /  
  
 / *   D e f i n e   t o   p r e v e n t   r e c u r s i v e   i n c l u s i o n   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i f n d e f   _ _ S T M 3 2 F 1 x x _ H A L _ C E C _ H  
 # d e f i n e   _ _ S T M 3 2 F 1 x x _ H A L _ C E C _ H  
  
 # i f d e f   _ _ c p l u s p l u s  
   e x t e r n   " C "   {  
 # e n d i f  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l _ d e f . h "  
  
 # i f   d e f i n e d   ( C E C )  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   C E C  
     *   @ {  
     * /  
    
 / *   E x p o r t e d   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /    
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ T y p e s   C E C   E x p o r t e d   T y p e s  
     *   @ {  
     * /  
 / * *    
     *   @ b r i e f   C E C   I n i t   S t r u c t u r e   d e f i n i t i o n      
     * /    
 t y p e d e f   s t r u c t  
 {  
     u i n t 3 2 _ t   T i m i n g E r r o r F r e e ;   / * ! <   C o n f i g u r e s   t h e   C E C   B i t   T i m i n g   E r r o r   M o d e .    
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C E C _ B i t T i m i n g E r r o r M o d e   * /  
     u i n t 3 2 _ t   P e r i o d E r r o r F r e e ;   / * ! <   C o n f i g u r e s   t h e   C E C   B i t   P e r i o d   E r r o r   M o d e .    
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C E C _ B i t P e r i o d E r r o r M o d e   * /  
     u i n t 1 6 _ t     O w n A d d r e s s ;           / * ! <   O w n   a d d r e s s e s   c o n f i g u r a t i o n  
                                                                   T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   C E C _ O W N _ A D D R E S S   * /  
     u i n t 8 _ t     * R x B u f f e r ;               / * ! <   C E C   R x   b u f f e r   p o i n t e u r   * /  
 } C E C _ I n i t T y p e D e f ;  
  
 / * *    
     *   @ b r i e f   H A L   C E C   S t a t e   s t r u c t u r e s   d e f i n i t i o n    
     *   @ n o t e     H A L   C E C   S t a t e   v a l u e   i s   a   c o m b i n a t i o n   o f   2   d i f f e r e n t   s u b s t a t e s :   g S t a t e   a n d   R x S t a t e .  
     *                 -   g S t a t e   c o n t a i n s   C E C   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   g l o b a l   H a n d l e   m a n a g e m e n t    
     *                     a n d   a l s o   i n f o r m a t i o n   r e l a t e d   t o   T x   o p e r a t i o n s .  
     *                     g S t a t e   v a l u e   c o d i n g   f o l l o w   b e l o w   d e s c r i b e d   b i t m a p   :  
     *                     b 7   ( n o t   u s e d )  
     *                           x     :   S h o u l d   b e   s e t   t o   0  
     *                     b 6     E r r o r   i n f o r m a t i o n    
     *                           0     :   N o   E r r o r  
     *                           1     :   E r r o r  
     *                     b 5           I P   i n i t i l i s a t i o n   s t a t u s  
     *                           0     :   R e s e t   ( I P   n o t   i n i t i a l i z e d )  
     *                           1     :   I n i t   d o n e   ( I P   i n i t i a l i z e d .   H A L   C E C   I n i t   f u n c t i o n   a l r e a d y   c a l l e d )  
     *                     b 4 - b 3     ( n o t   u s e d )  
     *                           x x   :   S h o u l d   b e   s e t   t o   0 0  
     *                     b 2           I n t r i n s i c   p r o c e s s   s t a t e  
     *                           0     :   R e a d y  
     *                           1     :   B u s y   ( I P   b u s y   w i t h   s o m e   c o n f i g u r a t i o n   o r   i n t e r n a l   o p e r a t i o n s )  
     *                     b 1           ( n o t   u s e d )  
     *                           x     :   S h o u l d   b e   s e t   t o   0  
     *                     b 0           T x   s t a t e  
     *                           0     :   R e a d y   ( n o   T x   o p e r a t i o n   o n g o i n g )  
     *                           1     :   B u s y   ( T x   o p e r a t i o n   o n g o i n g )  
     *                 -   R x S t a t e   c o n t a i n s   i n f o r m a t i o n   r e l a t e d   t o   R x   o p e r a t i o n s .  
     *                     R x S t a t e   v a l u e   c o d i n g   f o l l o w   b e l o w   d e s c r i b e d   b i t m a p   :  
     *                     b 7 - b 6     ( n o t   u s e d )  
     *                           x x   :   S h o u l d   b e   s e t   t o   0 0  
     *                     b 5           I P   i n i t i l i s a t i o n   s t a t u s  
     *                           0     :   R e s e t   ( I P   n o t   i n i t i a l i z e d )  
     *                           1     :   I n i t   d o n e   ( I P   i n i t i a l i z e d )  
     *                     b 4 - b 2     ( n o t   u s e d )  
     *                         x x x   :   S h o u l d   b e   s e t   t o   0 0 0  
     *                     b 1           R x   s t a t e  
     *                           0     :   R e a d y   ( n o   R x   o p e r a t i o n   o n g o i n g )  
     *                           1     :   B u s y   ( R x   o p e r a t i o n   o n g o i n g )  
     *                     b 0           ( n o t   u s e d )  
     *                           x     :   S h o u l d   b e   s e t   t o   0 .      
     * /    
 t y p e d e f   e n u m  
 {  
     H A L _ C E C _ S T A T E _ R E S E T                           =   0 x 0 0 U ,         / * ! <   P e r i p h e r a l   i s   n o t   y e t   I n i t i a l i z e d    
                                                                                                       V a l u e   i s   a l l o w e d   f o r   g S t a t e   a n d   R x S t a t e                           * /  
     H A L _ C E C _ S T A T E _ R E A D Y                           =   0 x 2 0 U ,         / * ! <   P e r i p h e r a l   I n i t i a l i z e d   a n d   r e a d y   f o r   u s e  
                                                                                                       V a l u e   i s   a l l o w e d   f o r   g S t a t e   a n d   R x S t a t e                           * /  
     H A L _ C E C _ S T A T E _ B U S Y                             =   0 x 2 4 U ,         / * ! <   a n   i n t e r n a l   p r o c e s s   i s   o n g o i n g  
                                                                                                       V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y                                         * /  
     H A L _ C E C _ S T A T E _ B U S Y _ R X                       =   0 x 2 2 U ,         / * ! <   D a t a   R e c e p t i o n   p r o c e s s   i s   o n g o i n g  
                                                                                                       V a l u e   i s   a l l o w e d   f o r   R x S t a t e   o n l y                                       * /  
     H A L _ C E C _ S T A T E _ B U S Y _ T X                       =   0 x 2 1 U ,         / * ! <   D a t a   T r a n s m i s s i o n   p r o c e s s   i s   o n g o i n g    
                                                                                                       V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y                                         * /  
     H A L _ C E C _ S T A T E _ B U S Y _ R X _ T X                 =   0 x 2 3 U ,         / * ! <   a n   i n t e r n a l   p r o c e s s   i s   o n g o i n g  
                                                                                                       V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y                                         * /  
     H A L _ C E C _ S T A T E _ E R R O R                           =   0 x 6 0 U           / * ! <   E r r o r   V a l u e   i s   a l l o w e d   f o r   g S t a t e   o n l y                             * /  
 } H A L _ C E C _ S t a t e T y p e D e f ;  
  
 / * *    
     *   @ b r i e f     C E C   h a n d l e   S t r u c t u r e   d e f i n i t i o n      
     * /      
 t y p e d e f   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f  
 {  
     C E C _ T y p e D e f                           * I n s t a n c e ;             / * ! <   C E C   r e g i s t e r s   b a s e   a d d r e s s   * /  
      
     C E C _ I n i t T y p e D e f                   I n i t ;                       / * ! <   C E C   c o m m u n i c a t i o n   p a r a m e t e r s   * /  
      
     u i n t 8 _ t                                   * p T x B u f f P t r ;         / * ! <   P o i n t e r   t o   C E C   T x   t r a n s f e r   B u f f e r   * /  
      
     u i n t 1 6 _ t                                 T x X f e r C o u n t ;         / * ! <   C E C   T x   T r a n s f e r   C o u n t e r   * /  
      
     u i n t 1 6 _ t                                 R x X f e r S i z e ;           / * ! <   C E C   R x   T r a n s f e r   s i z e ,   0 :   h e a d e r   r e c e i v e d   o n l y   * /  
      
     H A L _ L o c k T y p e D e f                   L o c k ;                       / * ! <   L o c k i n g   o b j e c t   * /  
  
     H A L _ C E C _ S t a t e T y p e D e f         g S t a t e ;                   / * ! <   C E C   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   g l o b a l   H a n d l e   m a n a g e m e n t    
                                                                                               a n d   a l s o   r e l a t e d   t o   T x   o p e r a t i o n s .  
                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   H A L _ C E C _ S t a t e T y p e D e f   * /  
      
     H A L _ C E C _ S t a t e T y p e D e f         R x S t a t e ;                 / * ! <   C E C   s t a t e   i n f o r m a t i o n   r e l a t e d   t o   R x   o p e r a t i o n s .  
                                                                                               T h i s   p a r a m e t e r   c a n   b e   a   v a l u e   o f   @ r e f   H A L _ C E C _ S t a t e T y p e D e f   * /  
      
     u i n t 3 2 _ t                                 E r r o r C o d e ;             / * ! <   F o r   e r r o r s   h a n d l i n g   p u r p o s e s ,   c o p y   o f   I S R   r e g i s t e r    
                                                                                               i n   c a s e   e r r o r   i s   r e p o r t e d   * /      
  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     v o i d     ( *   T x C p l t C a l l b a c k )   (   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f   *   h c e c ) ;                                                         / * ! <   C E C   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   * /  
     v o i d     ( *   R x C p l t C a l l b a c k )   (   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f   *   h c e c ,   u i n t 3 2 _ t   R x F r a m e S i z e ) ;             / * ! <   C E C   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   * /  
     v o i d     ( *   E r r o r C a l l b a c k )     (   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f   *   h c e c ) ;                                                         / * ! <   C E C   e r r o r   c a l l b a c k   * /  
  
     v o i d     ( *   M s p I n i t C a l l b a c k )                 (   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f   *   h c e c ) ;         / * ! <   C E C   M s p   I n i t   c a l l b a c k                             * /  
     v o i d     ( *   M s p D e I n i t C a l l b a c k )             (   s t r u c t   _ _ C E C _ H a n d l e T y p e D e f   *   h c e c ) ;         / * ! <   C E C   M s p   D e I n i t   c a l l b a c k                         * /  
  
 # e n d i f   / *   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S )   * / 	 	 	 	 	 	 	 	 	 	 	        
 } C E C _ H a n d l e T y p e D e f ;  
  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     H A L   C E C   C a l l b a c k   I D   e n u m e r a t i o n   d e f i n i t i o n  
     * /  
 t y p e d e f   e n u m  
 {  
     H A L _ C E C _ T X _ C P L T _ C B _ I D             =   0 x 0 0 U ,         / * ! <   C E C   T x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D     * /  
     H A L _ C E C _ R X _ C P L T _ C B _ I D             =   0 x 0 1 U ,         / * ! <   C E C   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   I D     * /  
     H A L _ C E C _ E R R O R _ C B _ I D                 =   0 x 0 2 U ,         / * ! <   C E C   e r r o r   c a l l b a c k     I D                                   * /  
     H A L _ C E C _ M S P I N I T _ C B _ I D             =   0 x 0 3 U ,         / * ! <   C E C   M s p   I n i t   c a l l b a c k   I D                               * /  
     H A L _ C E C _ M S P D E I N I T _ C B _ I D         =   0 x 0 4 U           / * ! <   C E C   M s p   D e I n i t   c a l l b a c k   I D                           * /  
 } H A L _ C E C _ C a l l b a c k I D T y p e D e f ;  
  
 / * *  
     *   @ b r i e f     H A L   C E C   C a l l b a c k   p o i n t e r   d e f i n i t i o n  
     * /  
 t y p e d e f     v o i d   ( * p C E C _ C a l l b a c k T y p e D e f ) ( C E C _ H a n d l e T y p e D e f   *   h c e c ) ;   / * ! <   p o i n t e r   t o   a n   C E C   c a l l b a c k   f u n c t i o n   * /  
 t y p e d e f     v o i d   ( * p C E C _ R x C a l l b a c k T y p e D e f ) ( C E C _ H a n d l e T y p e D e f   *   h c e c ,   u i n t 3 2 _ t   R x F r a m e S i z e ) ;   / * ! <   p o i n t e r   t o   a n   R x   T r a n s f e r   c o m p l e t e d   c a l l b a c k   f u n c t i o n   * /  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ C o n s t a n t s   C E C   E x p o r t e d   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ E r r o r _ C o d e   C E C   E r r o r   C o d e  
     *   @ {  
     * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ N O N E       0 x 0 0 0 0 0 0 0 0 U         / * ! <   n o   e r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ B T E         C E C _ E S R _ B T E         / * ! <   B i t   T i m i n g   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ B P E         C E C _ E S R _ B P E         / * ! <   B i t   P e r i o d   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ R B T F E     C E C _ E S R _ R B T F E     / * ! <   R x   B l o c k   T r a n s f e r   F i n i s h e d   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ S B E         C E C _ E S R _ S B E         / * ! <   S t a r t   B i t   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ A C K E       C E C _ E S R _ A C K E       / * ! <   B l o c k   A c k n o w l e d g e   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ L I N E       C E C _ E S R _ L I N E       / * ! <   L i n e   E r r o r   * /  
 # d e f i n e   H A L _ C E C _ E R R O R _ T B T F E     C E C _ E S R _ T B T F E     / * ! <   T x   B l o c k   T r a n s f e r   F i n i s h e d   E r r o r   * /  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e     H A L _ C E C _ E R R O R _ I N V A L I D _ C A L L B A C K   ( ( u i n t 3 2 _ t ) 0 x 0 0 0 0 0 0 8 0 U )   / * ! <   I n v a l i d   C a l l b a c k   E r r o r     * /  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ B i t T i m i n g E r r o r M o d e   B i t   T i m i n g   E r r o r   M o d e  
     *   @ {  
     * /    
 # d e f i n e   C E C _ B I T _ T I M I N G _ E R R O R _ M O D E _ S T A N D A R D     0 x 0 0 0 0 0 0 0 0 U             / * ! <   B i t   t i m i n g   e r r o r   S t a n d a r d   M o d e   * /  
 # d e f i n e   C E C _ B I T _ T I M I N G _ E R R O R _ M O D E _ E R R O R F R E E   C E C _ C F G R _ B T E M         / * ! <   B i t   t i m i n g   e r r o r   F r e e   M o d e   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ B i t P e r i o d E r r o r M o d e   B i t   P e r i o d   E r r o r   M o d e  
     *   @ {  
     * /    
 # d e f i n e   C E C _ B I T _ P E R I O D _ E R R O R _ M O D E _ S T A N D A R D   0 x 0 0 0 0 0 0 0 0 U             / * ! <   B i t   p e r i o d   e r r o r   S t a n d a r d   M o d e   * /  
 # d e f i n e   C E C _ B I T _ P E R I O D _ E R R O R _ M O D E _ F L E X I B L E   C E C _ C F G R _ B P E M         / * ! <   B i t   p e r i o d   e r r o r   F l e x i b l e   M o d e   * /  
 / * *  
     *   @ }  
     * /    
      
 / * *   @ d e f g r o u p   C E C _ I n i t i a t o r _ P o s i t i o n       C E C   I n i t i a t o r   l o g i c a l   a d d r e s s   p o s i t i o n   i n   m e s s a g e   h e a d e r            
     *   @ {  
     * /  
 # d e f i n e   C E C _ I N I T I A T O R _ L S B _ P O S                                     4 U  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ O W N _ A D D R E S S       C E C   O w n   A d d r e s s          
     *   @ {  
     * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ N O N E                         C E C _ O W N _ A D D R E S S _ 0         / *   R e s e t   v a l u e   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 0                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 0 U )       / *   L o g i c a l   A d d r e s s   0   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 1 U )       / *   L o g i c a l   A d d r e s s   1   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 2                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 2 U )       / *   L o g i c a l   A d d r e s s   2   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 3                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 3 U )       / *   L o g i c a l   A d d r e s s   3   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 4                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 4 U )       / *   L o g i c a l   A d d r e s s   4   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 5                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 5 U )       / *   L o g i c a l   A d d r e s s   5   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 6                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 6 U )       / *   L o g i c a l   A d d r e s s   6   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 7                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 7 U )       / *   L o g i c a l   A d d r e s s   7   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 8                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 8 U )       / *   L o g i c a l   A d d r e s s   8   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 9                             ( ( u i n t 1 6 _ t ) 0 x 0 0 0 9 U )       / *   L o g i c a l   A d d r e s s   9   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 0                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 A U )       / *   L o g i c a l   A d d r e s s   1 0   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 1                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 B U )       / *   L o g i c a l   A d d r e s s   1 1   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 2                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 C U )       / *   L o g i c a l   A d d r e s s   1 2   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 3                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 D U )       / *   L o g i c a l   A d d r e s s   1 3   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 4                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 E U )       / *   L o g i c a l   A d d r e s s   1 4   * /  
 # d e f i n e   C E C _ O W N _ A D D R E S S _ 1 5                           ( ( u i n t 1 6 _ t ) 0 x 0 0 0 F U )       / *   L o g i c a l   A d d r e s s   1 5   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ I n t e r r u p t s _ D e f i n i t i o n s     I n t e r r u p t s   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   C E C _ I T _ I E   C E C _ C F G R _ I E  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ F l a g s _ D e f i n i t i o n s     F l a g s   d e f i n i t i o n  
     *   @ {  
     * /  
 # d e f i n e   C E C _ F L A G _ T S O M     C E C _ C S R _ T S O M  
 # d e f i n e   C E C _ F L A G _ T E O M     C E C _ C S R _ T E O M  
 # d e f i n e   C E C _ F L A G _ T E R R     C E C _ C S R _ T E R R  
 # d e f i n e   C E C _ F L A G _ T B T R F   C E C _ C S R _ T B T R F  
 # d e f i n e   C E C _ F L A G _ R S O M     C E C _ C S R _ R S O M  
 # d e f i n e   C E C _ F L A G _ R E O M     C E C _ C S R _ R E O M  
 # d e f i n e   C E C _ F L A G _ R E R R     C E C _ C S R _ R E R R  
 # d e f i n e   C E C _ F L A G _ R B T F     C E C _ C S R _ R B T F  
 / * *  
     *   @ }  
     * /  
      
 / * *  
     *   @ }  
     * /      
      
 / *   E x p o r t e d   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ M a c r o s   C E C   E x p o r t e d   M a c r o s  
     *   @ {  
     * /  
  
 / * *   @ b r i e f     R e s e t   C E C   h a n d l e   g s t a t e   &   R x S t a t e  
     *   @ p a r a m     _ _ H A N D L E _ _ :   C E C   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 # d e f i n e   _ _ H A L _ C E C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o {                                                                                                       \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;           \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;         \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p I n i t C a l l b a c k   =   N U L L ;                       \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > M s p D e I n i t C a l l b a c k   =   N U L L ;                   \  
                                                                                                           }   w h i l e ( 0 )  
 # e l s e      
 # d e f i n e   _ _ H A L _ C E C _ R E S E T _ H A N D L E _ S T A T E ( _ _ H A N D L E _ _ )   d o {                                                                                                       \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > g S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;           \  
                                                                                                               ( _ _ H A N D L E _ _ ) - > R x S t a t e   =   H A L _ C E C _ S T A T E _ R E S E T ;         \  
                                                                                                           }   w h i l e ( 0 )  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *   @ b r i e f     C h e c k s   w h e t h e r   o r   n o t   t h e   s p e c i f i e d   C E C   i n t e r r u p t   f l a g   i s   s e t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   f l a g   t o   c h e c k .  
     *           @ a r g   C E C _ F L A G _ T E R R :   T x   E r r o r  
     *           @ a r g   C E C _ F L A G _ T B T R F : T x   B l o c k   T r a n s f e r   F i n i s h e d  
     *           @ a r g   C E C _ F L A G _ R E R R :   R x   E r r o r  
     *           @ a r g   C E C _ F L A G _ R B T F :   R x   B l o c k   T r a n s f e r   F i n i s h e d  
     *   @ r e t v a l   I T S t a t u s  
     * /  
 # d e f i n e   _ _ H A L _ C E C _ G E T _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )   R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R , ( _ _ F L A G _ _ ) )    
  
 / * *   @ b r i e f     C l e a r s   t h e   C E C ' s   p e n d i n g   f l a g s .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .  
     *   @ p a r a m     _ _ F L A G _ _ :   s p e c i f i e s   t h e   f l a g   t o   c l e a r .  
     *       T h i s   p a r a m e t e r   c a n   b e   a n y   c o m b i n a t i o n   o f   t h e   f o l l o w i n g   v a l u e s :  
     *           @ a r g   C E C _ C S R _ T E R R :   T x   E r r o r  
     *           @ a r g   C E C _ F L A G _ T B T R F :   T x   B l o c k   T r a n s f e r   F i n i s h e d  
     *           @ a r g   C E C _ C S R _ R E R R :   R x   E r r o r  
     *           @ a r g   C E C _ C S R _ R B T F :   R x   B l o c k   T r a n s f e r   F i n i s h e d  
     *   @ r e t v a l   n o n e      
     * /  
 # d e f i n e   _ _ H A L _ C E C _ C L E A R _ F L A G ( _ _ H A N D L E _ _ ,   _ _ F L A G _ _ )                                                                                                                                       \  
                                                     d o   {                                                                                                                                                                               \  
                                                         u i n t 3 2 _ t   t m p   =   0 x 0 U ;                                                                                                                                           \  
                                                         t m p   =   ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R   &   0 x 0 0 0 0 0 0 0 2 U ;                                                                                   \  
                                                         ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R   & =   ( u i n t 3 2 _ t ) ( ( ( ~ ( u i n t 3 2 _ t ) ( _ _ F L A G _ _ ) )   &   0 x F F F F F F F C U )   |   t m p ) ; \  
                                                     }   w h i l e ( 0 U )  
  
 / * *   @ b r i e f     E n a b l e s   t h e   s p e c i f i e d   C E C   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   C E C   i n t e r r u p t   t o   e n a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   C E C _ I T _ I E                   :   I n t e r r u p t   E n a b l e .  
     *   @ r e t v a l   n o n e  
     * /  
 # d e f i n e   _ _ H A L _ C E C _ E N A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F G R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     D i s a b l e s   t h e   s p e c i f i e d   C E C   i n t e r r u p t .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   C E C   i n t e r r u p t   t o   d i s a b l e .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   C E C _ I T _ I E                   :   I n t e r r u p t   E n a b l e  
     *   @ r e t v a l   n o n e  
     * /        
 # d e f i n e   _ _ H A L _ C E C _ D I S A B L E _ I T ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F G R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     C h e c k s   w h e t h e r   o r   n o t   t h e   s p e c i f i e d   C E C   i n t e r r u p t   i s   e n a b l e d .  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .  
     *   @ p a r a m     _ _ I N T E R R U P T _ _ :   s p e c i f i e s   t h e   C E C   i n t e r r u p t   t o   c h e c k .  
     *                     T h i s   p a r a m e t e r   c a n   b e :  
     *                         @ a r g   C E C _ I T _ I E                   :   I n t e r r u p t   E n a b l e  
     *   @ r e t v a l   F l a g S t a t u s      
     * /  
 # d e f i n e   _ _ H A L _ C E C _ G E T _ I T _ S O U R C E ( _ _ H A N D L E _ _ ,   _ _ I N T E R R U P T _ _ )   R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F G R ,   ( _ _ I N T E R R U P T _ _ ) )  
  
 / * *   @ b r i e f     E n a b l e s   t h e   C E C   d e v i c e  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   n o n e    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ E N A B L E ( _ _ H A N D L E _ _ )   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F G R ,   C E C _ C F G R _ P E )  
  
 / * *   @ b r i e f     D i s a b l e s   t h e   C E C   d e v i c e  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   n o n e    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ D I S A B L E ( _ _ H A N D L E _ _ )   C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C F G R ,   C E C _ C F G R _ P E )  
  
 / * *   @ b r i e f     S e t   T r a n s m i s s i o n   S t a r t   f l a g  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   n o n e    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ F I R S T _ B Y T E _ T X _ S E T ( _ _ H A N D L E _ _ )   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R ,   C E C _ C S R _ T S O M )  
  
 / * *   @ b r i e f     S e t   T r a n s m i s s i o n   E n d   f l a g  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   n o n e  
     * /  
 # d e f i n e   _ _ H A L _ C E C _ L A S T _ B Y T E _ T X _ S E T ( _ _ H A N D L E _ _ )   S E T _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R ,   C E C _ C S R _ T E O M )  
  
 / * *   @ b r i e f     G e t   T r a n s m i s s i o n   S t a r t   f l a g  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   F l a g S t a t u s    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ G E T _ T R A N S M I S S I O N _ S T A R T _ F L A G ( _ _ H A N D L E _ _ )   R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R ,   C E C _ C S R _ T S O M )  
  
 / * *   @ b r i e f     G e t   T r a n s m i s s i o n   E n d   f l a g  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   F l a g S t a t u s    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ G E T _ T R A N S M I S S I O N _ E N D _ F L A G ( _ _ H A N D L E _ _ )   R E A D _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > C S R ,   C E C _ C S R _ T E O M )  
  
 / * *   @ b r i e f     C l e a r   O A R   r e g i s t e r  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .                                
     *   @ r e t v a l   n o n e    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ C L E A R _ O A R ( _ _ H A N D L E _ _ )       C L E A R _ B I T ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > O A R ,   C E C _ O A R _ O A )  
  
 / * *   @ b r i e f     S e t   O A R   r e g i s t e r  
     *   @ p a r a m     _ _ H A N D L E _ _ :   s p e c i f i e s   t h e   C E C   H a n d l e .    
     *   @ p a r a m     _ _ A D D R E S S _ _ :   O w n   A d d r e s s   v a l u e .  
     *   @ r e t v a l   n o n e    
     * /  
 # d e f i n e   _ _ H A L _ C E C _ S E T _ O A R ( _ _ H A N D L E _ _ , _ _ A D D R E S S _ _ )   M O D I F Y _ R E G ( ( _ _ H A N D L E _ _ ) - > I n s t a n c e - > O A R ,   C E C _ O A R _ O A ,   ( _ _ A D D R E S S _ _ ) ) ;  
  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s   C E C   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ a d d t o g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s    
     *   @ {  
     * /  
 / *   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ D e I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ S e t D e v i c e A d d r e s s ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 1 6 _ t   C E C _ O w n A d d r e s s ) ;  
 v o i d   H A L _ C E C _ M s p I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 v o i d   H A L _ C E C _ M s p D e I n i t ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 # i f   ( U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ R e g i s t e r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   H A L _ C E C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p C E C _ C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ U n R e g i s t e r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   H A L _ C E C _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) ;  
  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ R e g i s t e r R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   p C E C _ R x C a l l b a c k T y p e D e f   p C a l l b a c k ) ;  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ U n R e g i s t e r R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 # e n d i f   / *   U S E _ H A L _ C E C _ R E G I S T E R _ C A L L B A C K S   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ a d d t o g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I n p u t   a n d   O u t p u t   o p e r a t i o n   f u n c t i o n s    
     *     @ b r i e f   C E C   T r a n s m i t / R e c e i v e   f u n c t i o n s    
     *   @ {  
     * /  
 / *   I / O   o p e r a t i o n   f u n c t i o n s     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ S t a t u s T y p e D e f   H A L _ C E C _ T r a n s m i t _ I T ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 8 _ t   I n i t i a t o r A d d r e s s , u i n t 8 _ t   D e s t i n a t i o n A d d r e s s ,   u i n t 8 _ t   * p D a t a ,   u i n t 3 2 _ t   S i z e ) ;  
 u i n t 3 2 _ t   H A L _ C E C _ G e t L a s t R e c e i v e d F r a m e S i z e ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 v o i d   H A L _ C E C _ C h a n g e R x B u f f e r ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 8 _ t *   R x b u f f e r ) ;  
 v o i d   H A L _ C E C _ I R Q H a n d l e r ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 v o i d   H A L _ C E C _ T x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 v o i d   H A L _ C E C _ R x C p l t C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ,   u i n t 3 2 _ t   R x F r a m e S i z e ) ;  
 v o i d   H A L _ C E C _ E r r o r C a l l b a c k ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   C E C _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   C o n t r o l   f u n c t i o n s    
     *     @ b r i e f       C E C   c o n t r o l   f u n c t i o n s    
     *   @ {  
     * /  
 / *   P e r i p h e r a l   S t a t e   a n d   E r r o r   f u n c t i o n s   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 H A L _ C E C _ S t a t e T y p e D e f   H A L _ C E C _ G e t S t a t e ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 u i n t 3 2 _ t   H A L _ C E C _ G e t E r r o r ( C E C _ H a n d l e T y p e D e f   * h c e c ) ;  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
      
 / *   P r i v a t e   t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ T y p e s   C E C   P r i v a t e   T y p e s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /    
  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ V a r i a b l e s   C E C   P r i v a t e   V a r i a b l e s  
     *   @ {  
     * /  
      
 / * *  
     *   @ }  
     * /    
  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ C o n s t a n t s   C E C   P r i v a t e   C o n s t a n t s  
     *   @ {  
     * /  
  
 / * *  
     *   @ }  
     * /    
  
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ M a c r o s   C E C   P r i v a t e   M a c r o s  
     *   @ {  
     * /  
 # d e f i n e   I S _ C E C _ B I T _ T I M I N G _ E R R O R _ M O D E ( M O D E )   ( ( ( M O D E )   = =   C E C _ B I T _ T I M I N G _ E R R O R _ M O D E _ S T A N D A R D )   | |   \  
                                                                                         ( ( M O D E )   = =   C E C _ B I T _ T I M I N G _ E R R O R _ M O D E _ E R R O R F R E E ) )  
  
 # d e f i n e   I S _ C E C _ B I T _ P E R I O D _ E R R O R _ M O D E ( M O D E )   ( ( ( M O D E )   = =   C E C _ B I T _ P E R I O D _ E R R O R _ M O D E _ S T A N D A R D )   | |   \  
                                                                                         ( ( M O D E )   = =   C E C _ B I T _ P E R I O D _ E R R O R _ M O D E _ F L E X I B L E ) )  
  
 / * *   @ b r i e f   C h e c k   C E C   m e s s a g e   s i z e .  
     *               T h e   m e s s a g e   s i z e   i s   t h e   p a y l o a d   s i z e :   w i t h o u t   c o u n t i n g   t h e   h e a d e r ,    
     *               i t   v a r i e s   f r o m   0   b y t e   ( p i n g   o p e r a t i o n ,   o n e   h e a d e r   o n l y ,   n o   p a y l o a d )   t o    
     *               1 5   b y t e s   ( 1   o p c o d e   a n d   u p   t o   1 4   o p e r a n d s   f o l l o w i n g   t h e   h e a d e r ) .    
     *   @ p a r a m     _ _ S I Z E _ _ :   C E C   m e s s a g e   s i z e .                                
     *   @ r e t v a l   T e s t   r e s u l t   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   I S _ C E C _ M S G S I Z E ( _ _ S I Z E _ _ )   ( ( _ _ S I Z E _ _ )   < =   0 x 1 0 U )  
 / * *   @ b r i e f   C h e c k   C E C   d e v i c e   O w n   A d d r e s s   R e g i s t e r   ( O A R )   s e t t i n g .  
     *   @ p a r a m     _ _ A D D R E S S _ _ :   C E C   o w n   a d d r e s s .                                
     *   @ r e t v a l   T e s t   r e s u l t   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   I S _ C E C _ O W N _ A D D R E S S ( _ _ A D D R E S S _ _ )   ( ( _ _ A D D R E S S _ _ )   < =   0 x 0 0 0 0 0 0 0 F U )  
  
 / * *   @ b r i e f   C h e c k   C E C   i n i t i a t o r   o r   d e s t i n a t i o n   l o g i c a l   a d d r e s s   s e t t i n g .  
     *                 I n i t i a t o r   a n d   d e s t i n a t i o n   a d d r e s s e s   a r e   c o d e d   o v e r   4   b i t s .    
     *   @ p a r a m     _ _ A D D R E S S _ _ :   C E C   i n i t i a t o r   o r   l o g i c a l   a d d r e s s .                                
     *   @ r e t v a l   T e s t   r e s u l t   ( T R U E   o r   F A L S E ) .  
     * /  
 # d e f i n e   I S _ C E C _ A D D R E S S ( _ _ A D D R E S S _ _ )   ( ( _ _ A D D R E S S _ _ )   < =   0 x 0 0 0 0 0 0 0 F U )  
  
  
  
 / * *  
     *   @ }  
     * /  
 / *   P r i v a t e   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   C E C _ P r i v a t e _ F u n c t i o n s   C E C   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
      
 / * *  
     *   @ }  
     * /  
      
 / * *  
     *   @ }  
     * /    
  
 / * *  
     *   @ }  
     * /    
  
 # e n d i f   / *   C E C   * /  
  
 # i f d e f   _ _ c p l u s p l u s  
 }  
 # e n d i f  
  
 # e n d i f   / *   _ _ S T M 3 2 F 1 x x _ H A L _ C E C _ H   * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  