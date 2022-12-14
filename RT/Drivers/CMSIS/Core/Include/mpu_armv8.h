??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
   *   @ f i l e           m p u _ a r m v 8 . h  
   *   @ b r i e f         C M S I S   M P U   A P I   f o r   A r m v 8 - M   M P U  
   *   @ v e r s i o n     V 5 . 0 . 4  
   *   @ d a t e           1 0 .   J a n u a r y   2 0 1 8  
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
 / *  
   *   C o p y r i g h t   ( c )   2 0 1 7 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
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
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   )  
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * /  
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ )  
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r         / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * /  
 # e n d i f  
  
 # i f n d e f   A R M _ M P U _ A R M V 8 _ H  
 # d e f i n e   A R M _ M P U _ A R M V 8 _ H  
  
 / * *   \ b r i e f   A t t r i b u t e   f o r   d e v i c e   m e m o r y   ( o u t e r   o n l y )   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ D E V I C E                                                       (   0 U   )  
  
 / * *   \ b r i e f   A t t r i b u t e   f o r   n o n - c a c h e a b l e ,   n o r m a l   m e m o r y   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ N O N _ C A C H E A B L E                                         (   4 U   )  
  
 / * *   \ b r i e f   A t t r i b u t e   f o r   n o r m a l   m e m o r y   ( o u t e r   a n d   i n n e r )  
 *   \ p a r a m   N T   N o n - T r a n s i e n t :   S e t   t o   1   f o r   n o n - t r a n s i e n t   d a t a .  
 *   \ p a r a m   W B   W r i t e - B a c k :   S e t   t o   1   t o   u s e   w r i t e - b a c k   u p d a t e   p o l i c y .  
 *   \ p a r a m   R A   R e a d   A l l o c a t i o n :   S e t   t o   1   t o   u s e   c a c h e   a l l o c a t i o n   o n   r e a d   m i s s .  
 *   \ p a r a m   W A   W r i t e   A l l o c a t i o n :   S e t   t o   1   t o   u s e   c a c h e   a l l o c a t i o n   o n   w r i t e   m i s s .  
 * /  
 # d e f i n e   A R M _ M P U _ A T T R _ M E M O R Y _ ( N T ,   W B ,   R A ,   W A )   \  
     ( ( ( N T   &   1 U )   < <   3 U )   |   ( ( W B   &   1 U )   < <   2 U )   |   ( ( R A   &   1 U )   < <   1 U )   |   ( W A   &   1 U ) )  
  
 / * *   \ b r i e f   D e v i c e   m e m o r y   t y p e   n o n   G a t h e r i n g ,   n o n   R e - o r d e r i n g ,   n o n   E a r l y   W r i t e   A c k n o w l e d g e m e n t   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ D E V I C E _ n G n R n E   ( 0 U )  
  
 / * *   \ b r i e f   D e v i c e   m e m o r y   t y p e   n o n   G a t h e r i n g ,   n o n   R e - o r d e r i n g ,   E a r l y   W r i t e   A c k n o w l e d g e m e n t   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ D E V I C E _ n G n R E     ( 1 U )  
  
 / * *   \ b r i e f   D e v i c e   m e m o r y   t y p e   n o n   G a t h e r i n g ,   R e - o r d e r i n g ,   E a r l y   W r i t e   A c k n o w l e d g e m e n t   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ D E V I C E _ n G R E       ( 2 U )  
  
 / * *   \ b r i e f   D e v i c e   m e m o r y   t y p e   G a t h e r i n g ,   R e - o r d e r i n g ,   E a r l y   W r i t e   A c k n o w l e d g e m e n t   * /  
 # d e f i n e   A R M _ M P U _ A T T R _ D E V I C E _ G R E         ( 3 U )  
  
 / * *   \ b r i e f   M e m o r y   A t t r i b u t e  
 *   \ p a r a m   O   O u t e r   m e m o r y   a t t r i b u t e s  
 *   \ p a r a m   I   O   = =   A R M _ M P U _ A T T R _ D E V I C E :   D e v i c e   m e m o r y   a t t r i b u t e s ,   e l s e :   I n n e r   m e m o r y   a t t r i b u t e s  
 * /  
 # d e f i n e   A R M _ M P U _ A T T R ( O ,   I )   ( ( ( O   &   0 x F U )   < <   4 U )   |   ( ( ( O   &   0 x F U )   ! =   0 U )   ?   ( I   &   0 x F U )   :   ( ( I   &   0 x 3 U )   < <   2 U ) ) )  
  
 / * *   \ b r i e f   N o r m a l   m e m o r y   n o n - s h a r e a b l e     * /  
 # d e f i n e   A R M _ M P U _ S H _ N O N       ( 0 U )  
  
 / * *   \ b r i e f   N o r m a l   m e m o r y   o u t e r   s h a r e a b l e     * /  
 # d e f i n e   A R M _ M P U _ S H _ O U T E R   ( 2 U )  
  
 / * *   \ b r i e f   N o r m a l   m e m o r y   i n n e r   s h a r e a b l e     * /  
 # d e f i n e   A R M _ M P U _ S H _ I N N E R   ( 3 U )  
  
 / * *   \ b r i e f   M e m o r y   a c c e s s   p e r m i s s i o n s  
 *   \ p a r a m   R O   R e a d - O n l y :   S e t   t o   1   f o r   r e a d - o n l y   m e m o r y .  
 *   \ p a r a m   N P   N o n - P r i v i l e g e d :   S e t   t o   1   f o r   n o n - p r i v i l e g e d   m e m o r y .  
 * /  
 # d e f i n e   A R M _ M P U _ A P _ ( R O ,   N P )   ( ( ( R O   &   1 U )   < <   1 U )   |   ( N P   &   1 U ) )  
  
 / * *   \ b r i e f   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   v a l u e  
 *   \ p a r a m   B A S E   T h e   b a s e   a d d r e s s   b i t s   [ 3 1 : 5 ]   o f   a   m e m o r y   r e g i o n .   T h e   v a l u e   i s   z e r o   e x t e n d e d .   E f f e c t i v e   a d d r e s s   g e t s   3 2   b y t e   a l i g n e d .  
 *   \ p a r a m   S H   D e f i n e s   t h e   S h a r e a b i l i t y   d o m a i n   f o r   t h i s   m e m o r y   r e g i o n .  
 *   \ p a r a m   R O   R e a d - O n l y :   S e t   t o   1   f o r   a   r e a d - o n l y   m e m o r y   r e g i o n .  
 *   \ p a r a m   N P   N o n - P r i v i l e g e d :   S e t   t o   1   f o r   a   n o n - p r i v i l e g e d   m e m o r y   r e g i o n .  
 *   \ o a r a m   X N   e X e c u t e   N e v e r :   S e t   t o   1   f o r   a   n o n - e x e c u t a b l e   m e m o r y   r e g i o n .  
 * /  
 # d e f i n e   A R M _ M P U _ R B A R ( B A S E ,   S H ,   R O ,   N P ,   X N )   \  
     ( ( B A S E   &   M P U _ R B A R _ B A S E _ M s k )   |   \  
     ( ( S H   < <   M P U _ R B A R _ S H _ P o s )   &   M P U _ R B A R _ S H _ M s k )   |   \  
     ( ( A R M _ M P U _ A P _ ( R O ,   N P )   < <   M P U _ R B A R _ A P _ P o s )   &   M P U _ R B A R _ A P _ M s k )   |   \  
     ( ( X N   < <   M P U _ R B A R _ X N _ P o s )   &   M P U _ R B A R _ X N _ M s k ) )  
  
 / * *   \ b r i e f   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   v a l u e  
 *   \ p a r a m   L I M I T   T h e   l i m i t   a d d r e s s   b i t s   [ 3 1 : 5 ]   f o r   t h i s   m e m o r y   r e g i o n .   T h e   v a l u e   i s   o n e   e x t e n d e d .  
 *   \ p a r a m   I D X   T h e   a t t r i b u t e   i n d e x   t o   b e   a s s o c i a t e d   w i t h   t h i s   m e m o r y   r e g i o n .  
 * /  
 # d e f i n e   A R M _ M P U _ R L A R ( L I M I T ,   I D X )   \  
     ( ( L I M I T   &   M P U _ R L A R _ L I M I T _ M s k )   |   \  
     ( ( I D X   < <   M P U _ R L A R _ A t t r I n d x _ P o s )   &   M P U _ R L A R _ A t t r I n d x _ M s k )   |   \  
     ( M P U _ R L A R _ E N _ M s k ) )  
  
 / * *  
 *   S t r u c t   f o r   a   s i n g l e   M P U   R e g i o n  
 * /  
 t y p e d e f   s t r u c t   {  
     u i n t 3 2 _ t   R B A R ;                                       / * ! <   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   v a l u e   * /  
     u i n t 3 2 _ t   R L A R ;                                       / * ! <   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   v a l u e   * /  
 }   A R M _ M P U _ R e g i o n _ t ;  
          
 / * *   E n a b l e   t h e   M P U .  
 *   \ p a r a m   M P U _ C o n t r o l   D e f a u l t   a c c e s s   p e r m i s s i o n s   f o r   u n c o n f i g u r e d   r e g i o n s .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ E n a b l e ( u i n t 3 2 _ t   M P U _ C o n t r o l )  
 {  
     _ _ D S B ( ) ;  
     _ _ I S B ( ) ;  
     M P U - > C T R L   =   M P U _ C o n t r o l   |   M P U _ C T R L _ E N A B L E _ M s k ;  
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k  
     S C B - > S H C S R   | =   S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
 # e n d i f  
 }  
  
 / * *   D i s a b l e   t h e   M P U .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ D i s a b l e ( v o i d )  
 {  
     _ _ D S B ( ) ;  
     _ _ I S B ( ) ;  
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k  
     S C B - > S H C S R   & =   ~ S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
 # e n d i f  
     M P U - > C T R L     & =   ~ M P U _ C T R L _ E N A B L E _ M s k ;  
 }  
  
 # i f d e f   M P U _ N S  
 / * *   E n a b l e   t h e   N o n - s e c u r e   M P U .  
 *   \ p a r a m   M P U _ C o n t r o l   D e f a u l t   a c c e s s   p e r m i s s i o n s   f o r   u n c o n f i g u r e d   r e g i o n s .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ E n a b l e _ N S ( u i n t 3 2 _ t   M P U _ C o n t r o l )  
 {  
     _ _ D S B ( ) ;  
     _ _ I S B ( ) ;  
     M P U _ N S - > C T R L   =   M P U _ C o n t r o l   |   M P U _ C T R L _ E N A B L E _ M s k ;  
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k  
     S C B _ N S - > S H C S R   | =   S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
 # e n d i f  
 }  
  
 / * *   D i s a b l e   t h e   N o n - s e c u r e   M P U .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ D i s a b l e _ N S ( v o i d )  
 {  
     _ _ D S B ( ) ;  
     _ _ I S B ( ) ;  
 # i f d e f   S C B _ S H C S R _ M E M F A U L T E N A _ M s k  
     S C B _ N S - > S H C S R   & =   ~ S C B _ S H C S R _ M E M F A U L T E N A _ M s k ;  
 # e n d i f  
     M P U _ N S - > C T R L     & =   ~ M P U _ C T R L _ E N A B L E _ M s k ;  
 }  
 # e n d i f  
  
 / * *   S e t   t h e   m e m o r y   a t t r i b u t e   e n c o d i n g   t o   t h e   g i v e n   M P U .  
 *   \ p a r a m   m p u   P o i n t e r   t o   t h e   M P U   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   i d x   T h e   a t t r i b u t e   i n d e x   t o   b e   s e t   [ 0 - 7 ]  
 *   \ p a r a m   a t t r   T h e   a t t r i b u t e   v a l u e   t o   b e   s e t .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t M e m A t t r E x ( M P U _ T y p e *   m p u ,   u i n t 8 _ t   i d x ,   u i n t 8 _ t   a t t r )  
 {  
     c o n s t   u i n t 8 _ t   r e g   =   i d x   /   4 U ;  
     c o n s t   u i n t 3 2 _ t   p o s   =   ( ( i d x   %   4 U )   *   8 U ) ;  
     c o n s t   u i n t 3 2 _ t   m a s k   =   0 x F F U   < <   p o s ;  
      
     i f   ( r e g   > =   ( s i z e o f ( m p u - > M A I R )   /   s i z e o f ( m p u - > M A I R [ 0 ] ) ) )   {  
         r e t u r n ;   / /   i n v a l i d   i n d e x  
     }  
      
     m p u - > M A I R [ r e g ]   =   ( ( m p u - > M A I R [ r e g ]   &   ~ m a s k )   |   ( ( a t t r   < <   p o s )   &   m a s k ) ) ;  
 }  
  
 / * *   S e t   t h e   m e m o r y   a t t r i b u t e   e n c o d i n g .  
 *   \ p a r a m   i d x   T h e   a t t r i b u t e   i n d e x   t o   b e   s e t   [ 0 - 7 ]  
 *   \ p a r a m   a t t r   T h e   a t t r i b u t e   v a l u e   t o   b e   s e t .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t M e m A t t r ( u i n t 8 _ t   i d x ,   u i n t 8 _ t   a t t r )  
 {  
     A R M _ M P U _ S e t M e m A t t r E x ( M P U ,   i d x ,   a t t r ) ;  
 }  
  
 # i f d e f   M P U _ N S  
 / * *   S e t   t h e   m e m o r y   a t t r i b u t e   e n c o d i n g   t o   t h e   N o n - s e c u r e   M P U .  
 *   \ p a r a m   i d x   T h e   a t t r i b u t e   i n d e x   t o   b e   s e t   [ 0 - 7 ]  
 *   \ p a r a m   a t t r   T h e   a t t r i b u t e   v a l u e   t o   b e   s e t .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t M e m A t t r _ N S ( u i n t 8 _ t   i d x ,   u i n t 8 _ t   a t t r )  
 {  
     A R M _ M P U _ S e t M e m A t t r E x ( M P U _ N S ,   i d x ,   a t t r ) ;  
 }  
 # e n d i f  
  
 / * *   C l e a r   a n d   d i s a b l e   t h e   g i v e n   M P U   r e g i o n   o f   t h e   g i v e n   M P U .  
 *   \ p a r a m   m p u   P o i n t e r   t o   M P U   t o   b e   u s e d .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c l e a r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ C l r R e g i o n E x ( M P U _ T y p e *   m p u ,   u i n t 3 2 _ t   r n r )  
 {  
     m p u - > R N R   =   r n r ;  
     m p u - > R L A R   =   0 U ;  
 }  
  
 / * *   C l e a r   a n d   d i s a b l e   t h e   g i v e n   M P U   r e g i o n .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c l e a r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ C l r R e g i o n ( u i n t 3 2 _ t   r n r )  
 {  
     A R M _ M P U _ C l r R e g i o n E x ( M P U ,   r n r ) ;  
 }  
  
 # i f d e f   M P U _ N S  
 / * *   C l e a r   a n d   d i s a b l e   t h e   g i v e n   N o n - s e c u r e   M P U   r e g i o n .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c l e a r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ C l r R e g i o n _ N S ( u i n t 3 2 _ t   r n r )  
 {      
     A R M _ M P U _ C l r R e g i o n E x ( M P U _ N S ,   r n r ) ;  
 }  
 # e n d i f  
  
 / * *   C o n f i g u r e   t h e   g i v e n   M P U   r e g i o n   o f   t h e   g i v e n   M P U .  
 *   \ p a r a m   m p u   P o i n t e r   t o   M P U   t o   b e   u s e d .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   r b a r   V a l u e   f o r   R B A R   r e g i s t e r .  
 *   \ p a r a m   r l a r   V a l u e   f o r   R L A R   r e g i s t e r .  
 * /        
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t R e g i o n E x ( M P U _ T y p e *   m p u ,   u i n t 3 2 _ t   r n r ,   u i n t 3 2 _ t   r b a r ,   u i n t 3 2 _ t   r l a r )  
 {  
     m p u - > R N R   =   r n r ;  
     m p u - > R B A R   =   r b a r ;  
     m p u - > R L A R   =   r l a r ;  
 }  
  
 / * *   C o n f i g u r e   t h e   g i v e n   M P U   r e g i o n .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   r b a r   V a l u e   f o r   R B A R   r e g i s t e r .  
 *   \ p a r a m   r l a r   V a l u e   f o r   R L A R   r e g i s t e r .  
 * /        
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t R e g i o n ( u i n t 3 2 _ t   r n r ,   u i n t 3 2 _ t   r b a r ,   u i n t 3 2 _ t   r l a r )  
 {  
     A R M _ M P U _ S e t R e g i o n E x ( M P U ,   r n r ,   r b a r ,   r l a r ) ;  
 }  
  
 # i f d e f   M P U _ N S  
 / * *   C o n f i g u r e   t h e   g i v e n   N o n - s e c u r e   M P U   r e g i o n .  
 *   \ p a r a m   r n r   R e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   r b a r   V a l u e   f o r   R B A R   r e g i s t e r .  
 *   \ p a r a m   r l a r   V a l u e   f o r   R L A R   r e g i s t e r .  
 * /        
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ S e t R e g i o n _ N S ( u i n t 3 2 _ t   r n r ,   u i n t 3 2 _ t   r b a r ,   u i n t 3 2 _ t   r l a r )  
 {  
     A R M _ M P U _ S e t R e g i o n E x ( M P U _ N S ,   r n r ,   r b a r ,   r l a r ) ;      
 }  
 # e n d i f  
  
 / * *   M e m c o p y   w i t h   s t r i c t l y   o r d e r e d   m e m o r y   a c c e s s ,   e . g .   f o r   r e g i s t e r   t a r g e t s .  
 *   \ p a r a m   d s t   D e s t i n a t i o n   d a t a   i s   c o p i e d   t o .  
 *   \ p a r a m   s r c   S o u r c e   d a t a   i s   c o p i e d   f r o m .  
 *   \ p a r a m   l e n   A m o u n t   o f   d a t a   w o r d s   t o   b e   c o p i e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   o r d e r e d C p y ( v o l a t i l e   u i n t 3 2 _ t *   d s t ,   c o n s t   u i n t 3 2 _ t *   _ _ R E S T R I C T   s r c ,   u i n t 3 2 _ t   l e n )  
 {  
     u i n t 3 2 _ t   i ;  
     f o r   ( i   =   0 U ;   i   <   l e n ;   + + i )    
     {  
         d s t [ i ]   =   s r c [ i ] ;  
     }  
 }  
  
 / * *   L o a d   t h e   g i v e n   n u m b e r   o f   M P U   r e g i o n s   f r o m   a   t a b l e   t o   t h e   g i v e n   M P U .  
 *   \ p a r a m   m p u   P o i n t e r   t o   t h e   M P U   r e g i s t e r s   t o   b e   u s e d .  
 *   \ p a r a m   r n r   F i r s t   r e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   t a b l e   P o i n t e r   t o   t h e   M P U   c o n f i g u r a t i o n   t a b l e .  
 *   \ p a r a m   c n t   A m o u n t   o f   r e g i o n s   t o   b e   c o n f i g u r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ L o a d E x ( M P U _ T y p e *   m p u ,   u i n t 3 2 _ t   r n r ,   A R M _ M P U _ R e g i o n _ t   c o n s t *   t a b l e ,   u i n t 3 2 _ t   c n t )    
 {  
     c o n s t   u i n t 3 2 _ t   r o w W o r d S i z e   =   s i z e o f ( A R M _ M P U _ R e g i o n _ t ) / 4 U ;  
     i f   ( c n t   = =   1 U )   {  
         m p u - > R N R   =   r n r ;  
         o r d e r e d C p y ( & ( m p u - > R B A R ) ,   & ( t a b l e - > R B A R ) ,   r o w W o r d S i z e ) ;  
     }   e l s e   {  
         u i n t 3 2 _ t   r n r B a s e       =   r n r   &   ~ ( M P U _ T Y P E _ R A L I A S E S - 1 U ) ;  
         u i n t 3 2 _ t   r n r O f f s e t   =   r n r   %   M P U _ T Y P E _ R A L I A S E S ;  
          
         m p u - > R N R   =   r n r B a s e ;  
         w h i l e   ( ( r n r O f f s e t   +   c n t )   >   M P U _ T Y P E _ R A L I A S E S )   {  
             u i n t 3 2 _ t   c   =   M P U _ T Y P E _ R A L I A S E S   -   r n r O f f s e t ;  
             o r d e r e d C p y ( & ( m p u - > R B A R ) + ( r n r O f f s e t * 2 U ) ,   & ( t a b l e - > R B A R ) ,   c * r o w W o r d S i z e ) ;  
             t a b l e   + =   c ;  
             c n t   - =   c ;  
             r n r O f f s e t   =   0 U ;  
             r n r B a s e   + =   M P U _ T Y P E _ R A L I A S E S ;  
             m p u - > R N R   =   r n r B a s e ;  
         }  
          
         o r d e r e d C p y ( & ( m p u - > R B A R ) + ( r n r O f f s e t * 2 U ) ,   & ( t a b l e - > R B A R ) ,   c n t * r o w W o r d S i z e ) ;  
     }  
 }  
  
 / * *   L o a d   t h e   g i v e n   n u m b e r   o f   M P U   r e g i o n s   f r o m   a   t a b l e .  
 *   \ p a r a m   r n r   F i r s t   r e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   t a b l e   P o i n t e r   t o   t h e   M P U   c o n f i g u r a t i o n   t a b l e .  
 *   \ p a r a m   c n t   A m o u n t   o f   r e g i o n s   t o   b e   c o n f i g u r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ L o a d ( u i n t 3 2 _ t   r n r ,   A R M _ M P U _ R e g i o n _ t   c o n s t *   t a b l e ,   u i n t 3 2 _ t   c n t )    
 {  
     A R M _ M P U _ L o a d E x ( M P U ,   r n r ,   t a b l e ,   c n t ) ;  
 }  
  
 # i f d e f   M P U _ N S  
 / * *   L o a d   t h e   g i v e n   n u m b e r   o f   M P U   r e g i o n s   f r o m   a   t a b l e   t o   t h e   N o n - s e c u r e   M P U .  
 *   \ p a r a m   r n r   F i r s t   r e g i o n   n u m b e r   t o   b e   c o n f i g u r e d .  
 *   \ p a r a m   t a b l e   P o i n t e r   t o   t h e   M P U   c o n f i g u r a t i o n   t a b l e .  
 *   \ p a r a m   c n t   A m o u n t   o f   r e g i o n s   t o   b e   c o n f i g u r e d .  
 * /  
 _ _ S T A T I C _ I N L I N E   v o i d   A R M _ M P U _ L o a d _ N S ( u i n t 3 2 _ t   r n r ,   A R M _ M P U _ R e g i o n _ t   c o n s t *   t a b l e ,   u i n t 3 2 _ t   c n t )    
 {  
     A R M _ M P U _ L o a d E x ( M P U _ N S ,   r n r ,   t a b l e ,   c n t ) ;  
 }  
 # e n d i f  
  
 # e n d i f  
  