??/ * *  
     * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   2 0 1 7   S T M i c r o e l e c t r o n i c s   * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e             s t a r t u p _ s t m 3 2 f 1 0 3 x b . s  
     *   @ a u t h o r         M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f           S T M 3 2 F 1 0 3 x B   D e v i c e s   v e c t o r   t a b l e   f o r   A t o l l i c   t o o l c h a i n .  
     *                         T h i s   m o d u l e   p e r f o r m s :  
     *                                 -   S e t   t h e   i n i t i a l   S P  
     *                                 -   S e t   t h e   i n i t i a l   P C   = =   R e s e t _ H a n d l e r ,  
     *                                 -   S e t   t h e   v e c t o r   t a b l e   e n t r i e s   w i t h   t h e   e x c e p t i o n s   I S R   a d d r e s s  
     *                                 -   C o n f i g u r e   t h e   c l o c k   s y s t e m        
     *                                 -   B r a n c h e s   t o   m a i n   i n   t h e   C   l i b r a r y   ( w h i c h   e v e n t u a l l y  
     *                                     c a l l s   m a i n ( ) ) .  
     *                         A f t e r   R e s e t   t h e   C o r t e x - M 3   p r o c e s s o r   i s   i n   T h r e a d   m o d e ,  
     *                         p r i o r i t y   i s   P r i v i l e g e d ,   a n d   t h e   S t a c k   i s   s e t   t o   M a i n .  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 7   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
     . s y n t a x   u n i f i e d  
     . c p u   c o r t e x - m 3  
     . f p u   s o f t v f p  
     . t h u m b  
  
 . g l o b a l   g _ p f n V e c t o r s  
 . g l o b a l   D e f a u l t _ H a n d l e r  
  
 / *   s t a r t   a d d r e s s   f o r   t h e   i n i t i a l i z a t i o n   v a l u e s   o f   t h e   . d a t a   s e c t i o n .  
 d e f i n e d   i n   l i n k e r   s c r i p t   * /  
 . w o r d   _ s i d a t a  
 / *   s t a r t   a d d r e s s   f o r   t h e   . d a t a   s e c t i o n .   d e f i n e d   i n   l i n k e r   s c r i p t   * /  
 . w o r d   _ s d a t a  
 / *   e n d   a d d r e s s   f o r   t h e   . d a t a   s e c t i o n .   d e f i n e d   i n   l i n k e r   s c r i p t   * /  
 . w o r d   _ e d a t a  
 / *   s t a r t   a d d r e s s   f o r   t h e   . b s s   s e c t i o n .   d e f i n e d   i n   l i n k e r   s c r i p t   * /  
 . w o r d   _ s b s s  
 / *   e n d   a d d r e s s   f o r   t h e   . b s s   s e c t i o n .   d e f i n e d   i n   l i n k e r   s c r i p t   * /  
 . w o r d   _ e b s s  
  
 . e q u     B o o t R A M ,                 0 x F 1 E 0 F 8 5 F  
 / * *  
   *   @ b r i e f     T h i s   i s   t h e   c o d e   t h a t   g e t s   c a l l e d   w h e n   t h e   p r o c e s s o r   f i r s t  
   *                     s t a r t s   e x e c u t i o n   f o l l o w i n g   a   r e s e t   e v e n t .   O n l y   t h e   a b s o l u t e l y  
   *                     n e c e s s a r y   s e t   i s   p e r f o r m e d ,   a f t e r   w h i c h   t h e   a p p l i c a t i o n  
   *                     s u p p l i e d   m a i n ( )   r o u t i n e   i s   c a l l e d .  
   *   @ p a r a m     N o n e  
   *   @ r e t v a l   :   N o n e  
 * /  
  
     . s e c t i o n   . t e x t . R e s e t _ H a n d l e r  
     . w e a k   R e s e t _ H a n d l e r  
     . t y p e   R e s e t _ H a n d l e r ,   % f u n c t i o n  
 R e s e t _ H a n d l e r :  
  
 / *   C o p y   t h e   d a t a   s e g m e n t   i n i t i a l i z e r s   f r o m   f l a s h   t o   S R A M   * /  
     l d r   r 0 ,   = _ s d a t a  
     l d r   r 1 ,   = _ e d a t a  
     l d r   r 2 ,   = _ s i d a t a  
     m o v s   r 3 ,   # 0  
     b   L o o p C o p y D a t a I n i t  
  
 C o p y D a t a I n i t :  
     l d r   r 4 ,   [ r 2 ,   r 3 ]  
     s t r   r 4 ,   [ r 0 ,   r 3 ]  
     a d d s   r 3 ,   r 3 ,   # 4  
  
 L o o p C o p y D a t a I n i t :  
     a d d s   r 4 ,   r 0 ,   r 3  
     c m p   r 4 ,   r 1  
     b c c   C o p y D a t a I n i t  
      
 / *   Z e r o   f i l l   t h e   b s s   s e g m e n t .   * /  
     l d r   r 2 ,   = _ s b s s  
     l d r   r 4 ,   = _ e b s s  
     m o v s   r 3 ,   # 0  
     b   L o o p F i l l Z e r o b s s  
  
 F i l l Z e r o b s s :  
     s t r     r 3 ,   [ r 2 ]  
     a d d s   r 2 ,   r 2 ,   # 4  
  
 L o o p F i l l Z e r o b s s :  
     c m p   r 2 ,   r 4  
     b c c   F i l l Z e r o b s s  
  
 / *   C a l l   t h e   c l o c k   s y s t e m   i n t i t i a l i z a t i o n   f u n c t i o n . * /  
         b l     S y s t e m I n i t  
 / *   C a l l   s t a t i c   c o n s t r u c t o r s   * /  
         b l   _ _ l i b c _ i n i t _ a r r a y  
 / *   C a l l   t h e   a p p l i c a t i o n ' s   e n t r y   p o i n t . * /  
     b l   m a i n  
     b x   l r  
 . s i z e   R e s e t _ H a n d l e r ,   . - R e s e t _ H a n d l e r  
  
 / * *  
   *   @ b r i e f     T h i s   i s   t h e   c o d e   t h a t   g e t s   c a l l e d   w h e n   t h e   p r o c e s s o r   r e c e i v e s   a n  
   *                   u n e x p e c t e d   i n t e r r u p t .     T h i s   s i m p l y   e n t e r s   a n   i n f i n i t e   l o o p ,   p r e s e r v i n g  
   *                   t h e   s y s t e m   s t a t e   f o r   e x a m i n a t i o n   b y   a   d e b u g g e r .  
   *   @ p a r a m     N o n e  
   *   @ r e t v a l   N o n e                
 * /  
         . s e c t i o n   . t e x t . D e f a u l t _ H a n d l e r , " a x " , % p r o g b i t s  
 D e f a u l t _ H a n d l e r :  
 I n f i n i t e _ L o o p :  
     b   I n f i n i t e _ L o o p  
     . s i z e   D e f a u l t _ H a n d l e r ,   . - D e f a u l t _ H a n d l e r  
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 *  
 *   T h e   m i n i m a l   v e c t o r   t a b l e   f o r   a   C o r t e x   M 3 .     N o t e   t h a t   t h e   p r o p e r   c o n s t r u c t s  
 *   m u s t   b e   p l a c e d   o n   t h i s   t o   e n s u r e   t h a t   i t   e n d s   u p   a t   p h y s i c a l   a d d r e s s  
 *   0 x 0 0 0 0 . 0 0 0 0 .  
 *  
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
     . s e c t i o n   . i s r _ v e c t o r , " a " , % p r o g b i t s  
     . t y p e   g _ p f n V e c t o r s ,   % o b j e c t  
     . s i z e   g _ p f n V e c t o r s ,   . - g _ p f n V e c t o r s  
  
  
 g _ p f n V e c t o r s :  
  
     . w o r d     _ e s t a c k  
     . w o r d     R e s e t _ H a n d l e r  
     . w o r d     N M I _ H a n d l e r  
     . w o r d     H a r d F a u l t _ H a n d l e r  
     . w o r d     M e m M a n a g e _ H a n d l e r  
     . w o r d     B u s F a u l t _ H a n d l e r  
     . w o r d     U s a g e F a u l t _ H a n d l e r  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     S V C _ H a n d l e r  
     . w o r d     D e b u g M o n _ H a n d l e r  
     . w o r d     0  
     . w o r d     P e n d S V _ H a n d l e r  
     . w o r d     S y s T i c k _ H a n d l e r  
     . w o r d     W W D G _ I R Q H a n d l e r  
     . w o r d     P V D _ I R Q H a n d l e r  
     . w o r d     T A M P E R _ I R Q H a n d l e r  
     . w o r d     R T C _ I R Q H a n d l e r  
     . w o r d     F L A S H _ I R Q H a n d l e r  
     . w o r d     R C C _ I R Q H a n d l e r  
     . w o r d     E X T I 0 _ I R Q H a n d l e r  
     . w o r d     E X T I 1 _ I R Q H a n d l e r  
     . w o r d     E X T I 2 _ I R Q H a n d l e r  
     . w o r d     E X T I 3 _ I R Q H a n d l e r  
     . w o r d     E X T I 4 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
     . w o r d     D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
     . w o r d     A D C 1 _ 2 _ I R Q H a n d l e r  
     . w o r d     U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r  
     . w o r d     U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r  
     . w o r d     C A N 1 _ R X 1 _ I R Q H a n d l e r  
     . w o r d     C A N 1 _ S C E _ I R Q H a n d l e r  
     . w o r d     E X T I 9 _ 5 _ I R Q H a n d l e r  
     . w o r d     T I M 1 _ B R K _ T I M 9 _ I R Q H a n d l e r  
     . w o r d     T I M 1 _ U P _ T I M 1 0 _ I R Q H a n d l e r  
     . w o r d     T I M 1 _ T R G _ C O M _ T I M 1 1 _ I R Q H a n d l e r  
     . w o r d     T I M 1 _ C C _ I R Q H a n d l e r  
     . w o r d     T I M 2 _ I R Q H a n d l e r  
     . w o r d     T I M 3 _ I R Q H a n d l e r  
     . w o r d     T I M 4 _ I R Q H a n d l e r  
     . w o r d     I 2 C 1 _ E V _ I R Q H a n d l e r  
     . w o r d     I 2 C 1 _ E R _ I R Q H a n d l e r  
     . w o r d     I 2 C 2 _ E V _ I R Q H a n d l e r  
     . w o r d     I 2 C 2 _ E R _ I R Q H a n d l e r  
     . w o r d     S P I 1 _ I R Q H a n d l e r  
     . w o r d     S P I 2 _ I R Q H a n d l e r  
     . w o r d     U S A R T 1 _ I R Q H a n d l e r  
     . w o r d     U S A R T 2 _ I R Q H a n d l e r  
     . w o r d     U S A R T 3 _ I R Q H a n d l e r  
     . w o r d     E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
     . w o r d     R T C _ A l a r m _ I R Q H a n d l e r  
     . w o r d     U S B W a k e U p _ I R Q H a n d l e r  
     . w o r d     T I M 8 _ B R K _ T I M 1 2 _ I R Q H a n d l e r  
     . w o r d     T I M 8 _ U P _ T I M 1 3 _ I R Q H a n d l e r  
     . w o r d     T I M 8 _ T R G _ C O M _ T I M 1 4 _ I R Q H a n d l e r  
     . w o r d     T I M 8 _ C C _ I R Q H a n d l e r  
     . w o r d     A D C 3 _ I R Q H a n d l e r  
     . w o r d     F S M C _ I R Q H a n d l e r  
     . w o r d     S D I O _ I R Q H a n d l e r  
     . w o r d     T I M 5 _ I R Q H a n d l e r  
     . w o r d     S P I 3 _ I R Q H a n d l e r  
     . w o r d     U A R T 4 _ I R Q H a n d l e r  
     . w o r d     U A R T 5 _ I R Q H a n d l e r  
     . w o r d     T I M 6 _ I R Q H a n d l e r  
     . w o r d     T I M 7 _ I R Q H a n d l e r  
     . w o r d     D M A 2 _ C h a n n e l 1 _ I R Q H a n d l e r  
     . w o r d     D M A 2 _ C h a n n e l 2 _ I R Q H a n d l e r  
     . w o r d     D M A 2 _ C h a n n e l 3 _ I R Q H a n d l e r  
     . w o r d     D M A 2 _ C h a n n e l 4 _ 5 _ I R Q H a n d l e r  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     0  
     . w o r d     B o o t R A M               / *   @ 0 x 1 E 0 .   T h i s   i s   f o r   b o o t   i n   R A M   m o d e   f o r    
                                                   S T M 3 2 F 1 0 x   X L - D e n s i t y   d e v i c e s .   * /  
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
 *  
 *   P r o v i d e   w e a k   a l i a s e s   f o r   e a c h   E x c e p t i o n   h a n d l e r   t o   t h e   D e f a u l t _ H a n d l e r .    
 *   A s   t h e y   a r e   w e a k   a l i a s e s ,   a n y   f u n c t i o n   w i t h   t h e   s a m e   n a m e   w i l l   o v e r r i d e    
 *   t h i s   d e f i n i t i o n .  
 *    
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * /  
          
     . w e a k     N M I _ H a n d l e r  
     . t h u m b _ s e t   N M I _ H a n d l e r , D e f a u l t _ H a n d l e r  
      
     . w e a k     H a r d F a u l t _ H a n d l e r  
     . t h u m b _ s e t   H a r d F a u l t _ H a n d l e r , D e f a u l t _ H a n d l e r  
      
     . w e a k     M e m M a n a g e _ H a n d l e r  
     . t h u m b _ s e t   M e m M a n a g e _ H a n d l e r , D e f a u l t _ H a n d l e r  
      
     . w e a k     B u s F a u l t _ H a n d l e r  
     . t h u m b _ s e t   B u s F a u l t _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U s a g e F a u l t _ H a n d l e r  
     . t h u m b _ s e t   U s a g e F a u l t _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S V C _ H a n d l e r  
     . t h u m b _ s e t   S V C _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D e b u g M o n _ H a n d l e r  
     . t h u m b _ s e t   D e b u g M o n _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     P e n d S V _ H a n d l e r  
     . t h u m b _ s e t   P e n d S V _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S y s T i c k _ H a n d l e r  
     . t h u m b _ s e t   S y s T i c k _ H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     W W D G _ I R Q H a n d l e r  
     . t h u m b _ s e t   W W D G _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     P V D _ I R Q H a n d l e r  
     . t h u m b _ s e t   P V D _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T A M P E R _ I R Q H a n d l e r  
     . t h u m b _ s e t   T A M P E R _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     R T C _ I R Q H a n d l e r  
     . t h u m b _ s e t   R T C _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     F L A S H _ I R Q H a n d l e r  
     . t h u m b _ s e t   F L A S H _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     R C C _ I R Q H a n d l e r  
     . t h u m b _ s e t   R C C _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 0 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 0 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 4 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 4 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 4 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 5 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 6 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 1 _ C h a n n e l 7 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     A D C 1 _ 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   A D C 1 _ 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S B _ H P _ C A N 1 _ T X _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S B _ L P _ C A N 1 _ R X 0 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     C A N 1 _ R X 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   C A N 1 _ R X 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     C A N 1 _ S C E _ I R Q H a n d l e r  
     . t h u m b _ s e t   C A N 1 _ S C E _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 9 _ 5 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 9 _ 5 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 1 _ B R K _ T I M 9 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 1 _ B R K _ T I M 9 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 1 _ U P _ T I M 1 0 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 1 _ U P _ T I M 1 0 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 1 _ T R G _ C O M _ T I M 1 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 1 _ T R G _ C O M _ T I M 1 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 1 _ C C _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 1 _ C C _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 4 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 4 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     I 2 C 1 _ E V _ I R Q H a n d l e r  
     . t h u m b _ s e t   I 2 C 1 _ E V _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     I 2 C 1 _ E R _ I R Q H a n d l e r  
     . t h u m b _ s e t   I 2 C 1 _ E R _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     I 2 C 2 _ E V _ I R Q H a n d l e r  
     . t h u m b _ s e t   I 2 C 2 _ E V _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     I 2 C 2 _ E R _ I R Q H a n d l e r  
     . t h u m b _ s e t   I 2 C 2 _ E R _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S P I 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   S P I 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S P I 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   S P I 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S A R T 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S A R T 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S A R T 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S A R T 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S A R T 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S A R T 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     E X T I 1 5 _ 1 0 _ I R Q H a n d l e r  
     . t h u m b _ s e t   E X T I 1 5 _ 1 0 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     R T C _ A l a r m _ I R Q H a n d l e r  
     . t h u m b _ s e t   R T C _ A l a r m _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U S B W a k e U p _ I R Q H a n d l e r  
     . t h u m b _ s e t   U S B W a k e U p _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 8 _ B R K _ T I M 1 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 8 _ B R K _ T I M 1 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 8 _ U P _ T I M 1 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 8 _ U P _ T I M 1 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 8 _ T R G _ C O M _ T I M 1 4 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 8 _ T R G _ C O M _ T I M 1 4 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 8 _ C C _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 8 _ C C _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     A D C 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   A D C 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     F S M C _ I R Q H a n d l e r  
     . t h u m b _ s e t   F S M C _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S D I O _ I R Q H a n d l e r  
     . t h u m b _ s e t   S D I O _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 5 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 5 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     S P I 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   S P I 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U A R T 4 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U A R T 4 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     U A R T 5 _ I R Q H a n d l e r  
     . t h u m b _ s e t   U A R T 5 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 6 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 6 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     T I M 7 _ I R Q H a n d l e r  
     . t h u m b _ s e t   T I M 7 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 2 _ C h a n n e l 1 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 2 _ C h a n n e l 1 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 2 _ C h a n n e l 2 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 2 _ C h a n n e l 2 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 2 _ C h a n n e l 3 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 2 _ C h a n n e l 3 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
     . w e a k     D M A 2 _ C h a n n e l 4 _ 5 _ I R Q H a n d l e r  
     . t h u m b _ s e t   D M A 2 _ C h a n n e l 4 _ 5 _ I R Q H a n d l e r , D e f a u l t _ H a n d l e r  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  