??/ * * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ t i m . c 
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m 
     *   @ b r i e f       T I M   H A L   m o d u l e   d r i v e r . 
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g 
     *                     f u n c t i o n a l i t i e s   o f   t h e   T i m e r   ( T I M )   p e r i p h e r a l : 
     *                       +   T I M   T i m e   B a s e   I n i t i a l i z a t i o n 
     *                       +   T I M   T i m e   B a s e   S t a r t 
     *                       +   T I M   T i m e   B a s e   S t a r t   I n t e r r u p t i o n 
     *                       +   T I M   T i m e   B a s e   S t a r t   D M A 
     *                       +   T I M   O u t p u t   C o m p a r e / P W M   I n i t i a l i z a t i o n 
     *                       +   T I M   O u t p u t   C o m p a r e / P W M   C h a n n e l   C o n f i g u r a t i o n 
     *                       +   T I M   O u t p u t   C o m p a r e / P W M     S t a r t 
     *                       +   T I M   O u t p u t   C o m p a r e / P W M     S t a r t   I n t e r r u p t i o n 
     *                       +   T I M   O u t p u t   C o m p a r e / P W M   S t a r t   D M A 
     *                       +   T I M   I n p u t   C a p t u r e   I n i t i a l i z a t i o n 
     *                       +   T I M   I n p u t   C a p t u r e   C h a n n e l   C o n f i g u r a t i o n 
     *                       +   T I M   I n p u t   C a p t u r e   S t a r t 
     *                       +   T I M   I n p u t   C a p t u r e   S t a r t   I n t e r r u p t i o n 
     *                       +   T I M   I n p u t   C a p t u r e   S t a r t   D M A 
     *                       +   T I M   O n e   P u l s e   I n i t i a l i z a t i o n 
     *                       +   T I M   O n e   P u l s e   C h a n n e l   C o n f i g u r a t i o n 
     *                       +   T I M   O n e   P u l s e   S t a r t 
     *                       +   T I M   E n c o d e r   I n t e r f a c e   I n i t i a l i z a t i o n 
     *                       +   T I M   E n c o d e r   I n t e r f a c e   S t a r t 
     *                       +   T I M   E n c o d e r   I n t e r f a c e   S t a r t   I n t e r r u p t i o n 
     *                       +   T I M   E n c o d e r   I n t e r f a c e   S t a r t   D M A 
     *                       +   C o m m u t a t i o n   E v e n t   c o n f i g u r a t i o n   w i t h   I n t e r r u p t i o n   a n d   D M A 
     *                       +   T I M   O C R e f   c l e a r   c o n f i g u r a t i o n 
     *                       +   T I M   E x t e r n a l   C l o c k   c o n f i g u r a t i o n 
     @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                             # # # # #   T I M E R   G e n e r i c   f e a t u r e s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ]   T h e   T i m e r   f e a t u r e s   i n c l u d e : 
               ( # )   1 6 - b i t   u p ,   d o w n ,   u p / d o w n   a u t o - r e l o a d   c o u n t e r . 
               ( # )   1 6 - b i t   p r o g r a m m a b l e   p r e s c a l e r   a l l o w i n g   d i v i d i n g   ( a l s o   o n   t h e   f l y )   t h e 
                       c o u n t e r   c l o c k   f r e q u e n c y   e i t h e r   b y   a n y   f a c t o r   b e t w e e n   1   a n d   6 5 5 3 6 . 
               ( # )   U p   t o   4   i n d e p e n d e n t   c h a n n e l s   f o r : 
                       ( + + )   I n p u t   C a p t u r e 
                       ( + + )   O u t p u t   C o m p a r e 
                       ( + + )   P W M   g e n e r a t i o n   ( E d g e   a n d   C e n t e r - a l i g n e d   M o d e ) 
                       ( + + )   O n e - p u l s e   m o d e   o u t p u t 
               ( # )   S y n c h r o n i z a t i o n   c i r c u i t   t o   c o n t r o l   t h e   t i m e r   w i t h   e x t e r n a l   s i g n a l s   a n d   t o   i n t e r c o n n e c t 
                         s e v e r a l   t i m e r s   t o g e t h e r . 
               ( # )   S u p p o r t s   i n c r e m e n t a l   e n c o d e r   f o r   p o s i t i o n i n g   p u r p o s e s 
 
                         # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
           ( # )   I n i t i a l i z e   t h e   T I M   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   f o l l o w i n g   f u n c t i o n s 
                   d e p e n d i n g   o n   t h e   s e l e c t e d   f e a t u r e : 
                       ( + + )   T i m e   B a s e   :   H A L _ T I M _ B a s e _ M s p I n i t ( ) 
                       ( + + )   I n p u t   C a p t u r e   :   H A L _ T I M _ I C _ M s p I n i t ( ) 
                       ( + + )   O u t p u t   C o m p a r e   :   H A L _ T I M _ O C _ M s p I n i t ( ) 
                       ( + + )   P W M   g e n e r a t i o n   :   H A L _ T I M _ P W M _ M s p I n i t ( ) 
                       ( + + )   O n e - p u l s e   m o d e   o u t p u t   :   H A L _ T I M _ O n e P u l s e _ M s p I n i t ( ) 
                       ( + + )   E n c o d e r   m o d e   o u t p u t   :   H A L _ T I M _ E n c o d e r _ M s p I n i t ( ) 
 
           ( # )   I n i t i a l i z e   t h e   T I M   l o w   l e v e l   r e s o u r c e s   : 
                 ( # # )   E n a b l e   t h e   T I M   i n t e r f a c e   c l o c k   u s i n g   _ _ H A L _ R C C _ T I M x _ C L K _ E N A B L E ( ) ; 
                 ( # # )   T I M   p i n s   c o n f i g u r a t i o n 
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   T I M   G P I O s   u s i n g   t h e   f o l l o w i n g   f u n c t i o n : 
                           _ _ H A L _ R C C _ G P I O x _ C L K _ E N A B L E ( ) ; 
                         ( + + + )   C o n f i g u r e   t h e s e   T I M   p i n s   i n   A l t e r n a t e   f u n c t i o n   m o d e   u s i n g   H A L _ G P I O _ I n i t ( ) ; 
 
           ( # )   T h e   e x t e r n a l   C l o c k   c a n   b e   c o n f i g u r e d ,   i f   n e e d e d   ( t h e   d e f a u l t   c l o c k   i s   t h e 
                   i n t e r n a l   c l o c k   f r o m   t h e   A P B x ) ,   u s i n g   t h e   f o l l o w i n g   f u n c t i o n : 
                   H A L _ T I M _ C o n f i g C l o c k S o u r c e ,   t h e   c l o c k   c o n f i g u r a t i o n   s h o u l d   b e   d o n e   b e f o r e 
                   a n y   s t a r t   f u n c t i o n . 
 
           ( # )   C o n f i g u r e   t h e   T I M   i n   t h e   d e s i r e d   f u n c t i o n i n g   m o d e   u s i n g   o n e   o f   t h e 
               I n i t i a l i z a t i o n   f u n c t i o n   o f   t h i s   d r i v e r : 
               ( + + )   H A L _ T I M _ B a s e _ I n i t :   t o   u s e   t h e   T i m e r   t o   g e n e r a t e   a   s i m p l e   t i m e   b a s e 
               ( + + )   H A L _ T I M _ O C _ I n i t   a n d   H A L _ T I M _ O C _ C o n f i g C h a n n e l :   t o   u s e   t h e   T i m e r   t o   g e n e r a t e   a n 
                         O u t p u t   C o m p a r e   s i g n a l . 
               ( + + )   H A L _ T I M _ P W M _ I n i t   a n d   H A L _ T I M _ P W M _ C o n f i g C h a n n e l :   t o   u s e   t h e   T i m e r   t o   g e n e r a t e   a 
                         P W M   s i g n a l . 
               ( + + )   H A L _ T I M _ I C _ I n i t   a n d   H A L _ T I M _ I C _ C o n f i g C h a n n e l :   t o   u s e   t h e   T i m e r   t o   m e a s u r e   a n 
                         e x t e r n a l   s i g n a l . 
               ( + + )   H A L _ T I M _ O n e P u l s e _ I n i t   a n d   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l :   t o   u s e   t h e   T i m e r 
                         i n   O n e   P u l s e   M o d e . 
               ( + + )   H A L _ T I M _ E n c o d e r _ I n i t :   t o   u s e   t h e   T i m e r   E n c o d e r   I n t e r f a c e . 
 
           ( # )   A c t i v a t e   t h e   T I M   p e r i p h e r a l   u s i n g   o n e   o f   t h e   s t a r t   f u n c t i o n s   d e p e n d i n g   f r o m   t h e   f e a t u r e   u s e d : 
                       ( + + )   T i m e   B a s e   :   H A L _ T I M _ B a s e _ S t a r t ( ) ,   H A L _ T I M _ B a s e _ S t a r t _ D M A ( ) ,   H A L _ T I M _ B a s e _ S t a r t _ I T ( ) 
                       ( + + )   I n p u t   C a p t u r e   :     H A L _ T I M _ I C _ S t a r t ( ) ,   H A L _ T I M _ I C _ S t a r t _ D M A ( ) ,   H A L _ T I M _ I C _ S t a r t _ I T ( ) 
                       ( + + )   O u t p u t   C o m p a r e   :   H A L _ T I M _ O C _ S t a r t ( ) ,   H A L _ T I M _ O C _ S t a r t _ D M A ( ) ,   H A L _ T I M _ O C _ S t a r t _ I T ( ) 
                       ( + + )   P W M   g e n e r a t i o n   :   H A L _ T I M _ P W M _ S t a r t ( ) ,   H A L _ T I M _ P W M _ S t a r t _ D M A ( ) ,   H A L _ T I M _ P W M _ S t a r t _ I T ( ) 
                       ( + + )   O n e - p u l s e   m o d e   o u t p u t   :   H A L _ T I M _ O n e P u l s e _ S t a r t ( ) ,   H A L _ T I M _ O n e P u l s e _ S t a r t _ I T ( ) 
                       ( + + )   E n c o d e r   m o d e   o u t p u t   :   H A L _ T I M _ E n c o d e r _ S t a r t ( ) ,   H A L _ T I M _ E n c o d e r _ S t a r t _ D M A ( ) ,   H A L _ T I M _ E n c o d e r _ S t a r t _ I T ( ) . 
 
           ( # )   T h e   D M A   B u r s t   i s   m a n a g e d   w i t h   t h e   t w o   f o l l o w i n g   f u n c t i o n s : 
                   H A L _ T I M _ D M A B u r s t _ W r i t e S t a r t ( ) 
                   H A L _ T I M _ D M A B u r s t _ R e a d S t a r t ( ) 
 
         * * *   C a l l b a c k   r e g i s t r a t i o n   * * * 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
 
     [ . . ] 
     T h e   c o m p i l a t i o n   d e f i n e     U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1 
     a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s . 
 
     [ . . ] 
     U s e   F u n c t i o n   @ r e f   H A L _ T I M _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   c a l l b a c k . 
     @ r e f   H A L _ T I M _ R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e , 
     t h e   C a l l b a c k   I D   a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n . 
 
     [ . . ] 
     U s e   f u n c t i o n   @ r e f   H A L _ T I M _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t 
     w e a k   f u n c t i o n . 
     @ r e f   H A L _ T I M _ U n R e g i s t e r C a l l b a c k   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e , 
     a n d   t h e   C a l l b a c k   I D . 
 
     [ . . ] 
     T h e s e   f u n c t i o n s   a l l o w   t o   r e g i s t e r / u n r e g i s t e r   f o l l o w i n g   c a l l b a c k s : 
         ( + )   B a s e _ M s p I n i t C a l l b a c k                             :   T I M   B a s e   M s p   I n i t   C a l l b a c k . 
         ( + )   B a s e _ M s p D e I n i t C a l l b a c k                         :   T I M   B a s e   M s p   D e I n i t   C a l l b a c k . 
         ( + )   I C _ M s p I n i t C a l l b a c k                                 :   T I M   I C   M s p   I n i t   C a l l b a c k . 
         ( + )   I C _ M s p D e I n i t C a l l b a c k                             :   T I M   I C   M s p   D e I n i t   C a l l b a c k . 
         ( + )   O C _ M s p I n i t C a l l b a c k                                 :   T I M   O C   M s p   I n i t   C a l l b a c k . 
         ( + )   O C _ M s p D e I n i t C a l l b a c k                             :   T I M   O C   M s p   D e I n i t   C a l l b a c k . 
         ( + )   P W M _ M s p I n i t C a l l b a c k                               :   T I M   P W M   M s p   I n i t   C a l l b a c k . 
         ( + )   P W M _ M s p D e I n i t C a l l b a c k                           :   T I M   P W M   M s p   D e I n i t   C a l l b a c k . 
         ( + )   O n e P u l s e _ M s p I n i t C a l l b a c k                     :   T I M   O n e   P u l s e   M s p   I n i t   C a l l b a c k . 
         ( + )   O n e P u l s e _ M s p D e I n i t C a l l b a c k                 :   T I M   O n e   P u l s e   M s p   D e I n i t   C a l l b a c k . 
         ( + )   E n c o d e r _ M s p I n i t C a l l b a c k                       :   T I M   E n c o d e r   M s p   I n i t   C a l l b a c k . 
         ( + )   E n c o d e r _ M s p D e I n i t C a l l b a c k                   :   T I M   E n c o d e r   M s p   D e I n i t   C a l l b a c k . 
         ( + )   H a l l S e n s o r _ M s p I n i t C a l l b a c k                 :   T I M   H a l l   S e n s o r   M s p   I n i t   C a l l b a c k . 
         ( + )   H a l l S e n s o r _ M s p D e I n i t C a l l b a c k             :   T I M   H a l l   S e n s o r   M s p   D e I n i t   C a l l b a c k . 
         ( + )   P e r i o d E l a p s e d C a l l b a c k                           :   T I M   P e r i o d   E l a p s e d   C a l l b a c k . 
         ( + )   P e r i o d E l a p s e d H a l f C p l t C a l l b a c k           :   T I M   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k . 
         ( + )   T r i g g e r C a l l b a c k                                       :   T I M   T r i g g e r   C a l l b a c k . 
         ( + )   T r i g g e r H a l f C p l t C a l l b a c k                       :   T I M   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k . 
         ( + )   I C _ C a p t u r e C a l l b a c k                                 :   T I M   I n p u t   C a p t u r e   C a l l b a c k . 
         ( + )   I C _ C a p t u r e H a l f C p l t C a l l b a c k                 :   T I M   I n p u t   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k . 
         ( + )   O C _ D e l a y E l a p s e d C a l l b a c k                       :   T I M   O u t p u t   C o m p a r e   D e l a y   E l a p s e d   C a l l b a c k . 
         ( + )   P W M _ P u l s e F i n i s h e d C a l l b a c k                   :   T I M   P W M   P u l s e   F i n i s h e d   C a l l b a c k . 
         ( + )   P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k   :   T I M   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k . 
         ( + )   E r r o r C a l l b a c k                                           :   T I M   E r r o r   C a l l b a c k . 
         ( + )   C o m m u t a t i o n C a l l b a c k                               :   T I M   C o m m u t a t i o n   C a l l b a c k . 
         ( + )   C o m m u t a t i o n H a l f C p l t C a l l b a c k               :   T I M   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k . 
         ( + )   B r e a k C a l l b a c k                                           :   T I M   B r e a k   C a l l b a c k . 
 
     [ . . ] 
 B y   d e f a u l t ,   a f t e r   t h e   I n i t   a n d   w h e n   t h e   s t a t e   i s   H A L _ T I M _ S T A T E _ R E S E T 
 a l l   i n t e r r u p t   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s : 
     e x a m p l e s   @ r e f   H A L _ T I M _ T r i g g e r C a l l b a c k ( ) ,   @ r e f   H A L _ T I M _ E r r o r C a l l b a c k ( ) . 
 
     [ . . ] 
     E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e   r e s e t   t o   t h e   l e g a c y   w e a k 
     f u n c t i o n a l i t i e s   i n   t h e   I n i t   /   D e I n i t   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l 
     ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .   I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   I n i t   /   D e I n i t 
         k e e p   a n d   u s e   t h e   u s e r   M s p I n i t   /   M s p D e I n i t   c a l l b a c k s ( r e g i s t e r e d   b e f o r e h a n d ) 
 
     [ . . ] 
         C a l l b a c k s   c a n   b e   r e g i s t e r e d   /   u n r e g i s t e r e d   i n   H A L _ T I M _ S T A T E _ R E A D Y   s t a t e   o n l y . 
         E x c e p t i o n   d o n e   M s p I n i t   /   M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d   /   u n r e g i s t e r e d 
         i n   H A L _ T I M _ S T A T E _ R E A D Y   o r   H A L _ T I M _ S T A T E _ R E S E T   s t a t e , 
         t h u s   r e g i s t e r e d ( u s e r )   M s p I n i t   /   D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t   /   D e I n i t . 
     I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s 
             u s i n g   @ r e f   H A L _ T I M _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   D e I n i t   o r   I n i t   f u n c t i o n . 
 
     [ . . ] 
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r 
             n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e   a n d   a l l   c a l l b a c k s 
             a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   f u n c t i o n s . 
 
     @ e n d v e r b a t i m 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     *   @ a t t e n t i o n 
     * 
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s . 
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 > 
     * 
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e , 
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e 
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t : 
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e 
     * 
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
     * / 
 
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h " 
 
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   T I M   T I M 
     *   @ b r i e f   T I M   H A L   m o d u l e   d r i v e r 
     *   @ { 
     * / 
 
 # i f d e f   H A L _ T I M _ M O D U L E _ E N A B L E D 
 
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   m a c r o s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 / * *   @ a d d t o g r o u p   T I M _ P r i v a t e _ F u n c t i o n s 
     *   @ { 
     * / 
 s t a t i c   v o i d   T I M _ O C 1 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) ; 
 s t a t i c   v o i d   T I M _ O C 3 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) ; 
 s t a t i c   v o i d   T I M _ O C 4 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) ; 
 s t a t i c   v o i d   T I M _ T I 1 _ C o n f i g I n p u t S t a g e ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C F i l t e r ) ; 
 s t a t i c   v o i d   T I M _ T I 2 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) ; 
 s t a t i c   v o i d   T I M _ T I 2 _ C o n f i g I n p u t S t a g e ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C F i l t e r ) ; 
 s t a t i c   v o i d   T I M _ T I 3 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) ; 
 s t a t i c   v o i d   T I M _ T I 4 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) ; 
 s t a t i c   v o i d   T I M _ I T R x _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   I n p u t T r i g g e r S o u r c e ) ; 
 s t a t i c   v o i d   T I M _ D M A P e r i o d E l a p s e d C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ D M A P e r i o d E l a p s e d H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ D M A D e l a y P u l s e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ D M A T r i g g e r C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   v o i d   T I M _ D M A T r i g g e r H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ; 
 s t a t i c   H A L _ S t a t u s T y p e D e f   T I M _ S l a v e T i m e r _ S e t C o n f i g ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                     T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) ; 
 / * * 
     *   @ } 
     * / 
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s   T I M   E x p o r t e d   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   T I M   T i m e   B a s e   f u n c t i o n s 
     *     @ b r i e f         T i m e   B a s e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                             # # # # #   T i m e   B a s e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   b a s e . 
         ( + )   D e - i n i t i a l i z e   t h e   T I M   b a s e . 
         ( + )   S t a r t   t h e   T i m e   B a s e . 
         ( + )   S t o p   t h e   T i m e   B a s e . 
         ( + )   S t a r t   t h e   T i m e   B a s e   a n d   e n a b l e   i n t e r r u p t . 
         ( + )   S t o p   t h e   T i m e   B a s e   a n d   d i s a b l e   i n t e r r u p t . 
         ( + )   S t a r t   t h e   T i m e   B a s e   a n d   e n a b l e   D M A   t r a n s f e r . 
         ( + )   S t o p   t h e   T i m e   B a s e   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   T i m e   b a s e   U n i t   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ H a n d l e T y p e D e f   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ B a s e _ D e I n i t ( )   b e f o r e   H A L _ T I M _ B a s e _ I n i t ( ) 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > B a s e _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > B a s e _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ B a s e _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > B a s e _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         H A L _ T I M _ B a s e _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   S e t   t h e   T i m e   B a s e   c o n f i g u r a t i o n   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   B a s e   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > B a s e _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > B a s e _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ B a s e _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > B a s e _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * / 
     H A L _ T I M _ B a s e _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   C h a n g e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   B a s e   M S P . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ B a s e _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ B a s e _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   B a s e   M S P . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ B a s e _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ B a s e _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   B a s e   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   C h e c k   t h e   T I M   s t a t e   * / 
     i f   ( h t i m - > S t a t e   ! =   H A L _ T I M _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   B a s e   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   B a s e   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   C h e c k   t h e   T I M   s t a t e   * / 
     i f   ( h t i m - > S t a t e   ! =   H A L _ T I M _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   E n a b l e   t h e   T I M   U p d a t e   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ U P D A T E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   B a s e   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   T I M   U p d a t e   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ U P D A T E ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   B a s e   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   p e r i p h e r a l . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   D M A   P e r i o d   e l a p s e d   c a l l b a c k s   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d C p l t ; 
     h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d H a l f C p l t ; 
 
     / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
     h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
     / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
     i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > A R R , 
                                           L e n g t h )   ! =   H A L _ O K ) 
     { 
         / *   R e t u r n   e r r o r   s t a t u s   * / 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   E n a b l e   t h e   T I M   U p d a t e   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ U P D A T E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   B a s e   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ B a s e _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   T I M   U p d a t e   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ U P D A T E ) ; 
 
     ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   T I M   O u t p u t   C o m p a r e   f u n c t i o n s 
     *     @ b r i e f         T I M   O u t p u t   C o m p a r e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                     # # # # #   T I M   O u t p u t   C o m p a r e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   O u t p u t   C o m p a r e . 
         ( + )   D e - i n i t i a l i z e   t h e   T I M   O u t p u t   C o m p a r e . 
         ( + )   S t a r t   t h e   T I M   O u t p u t   C o m p a r e . 
         ( + )   S t o p   t h e   T I M   O u t p u t   C o m p a r e . 
         ( + )   S t a r t   t h e   T I M   O u t p u t   C o m p a r e   a n d   e n a b l e   i n t e r r u p t . 
         ( + )   S t o p   t h e   T I M   O u t p u t   C o m p a r e   a n d   d i s a b l e   i n t e r r u p t . 
         ( + )   S t a r t   t h e   T I M   O u t p u t   C o m p a r e   a n d   e n a b l e   D M A   t r a n s f e r . 
         ( + )   S t o p   t h e   T I M   O u t p u t   C o m p a r e   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O u t p u t   C o m p a r e   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ H a n d l e T y p e D e f   a n d   i n i t i a l i z e s   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ O C _ D e I n i t ( )   b e f o r e   H A L _ T I M _ O C _ I n i t ( ) 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > O C _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > O C _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ O C _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > O C _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M _ O C _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   I n i t   t h e   b a s e   t i m e   f o r   t h e   O u t p u t   C o m p a r e   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,     & h t i m - > I n i t ) ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > O C _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > O C _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ O C _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > O C _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
     H A L _ T I M _ O C _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   C h a n g e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O u t p u t   C o m p a r e   M S P . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ O C _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ O C _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   O u t p u t   C o m p a r e   M S P . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ O C _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ O C _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   T I M   p e r i p h e r a l 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 3 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 4 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O u t p u t   C o m p a r e   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   O u t p u t   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   T I M   P W M   f u n c t i o n s 
     *     @ b r i e f         T I M   P W M   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                     # # # # #   T I M   P W M   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   P W M . 
         ( + )   D e - i n i t i a l i z e   t h e   T I M   P W M . 
         ( + )   S t a r t   t h e   T I M   P W M . 
         ( + )   S t o p   t h e   T I M   P W M . 
         ( + )   S t a r t   t h e   T I M   P W M   a n d   e n a b l e   i n t e r r u p t . 
         ( + )   S t o p   t h e   T I M   P W M   a n d   d i s a b l e   i n t e r r u p t . 
         ( + )   S t a r t   t h e   T I M   P W M   a n d   e n a b l e   D M A   t r a n s f e r . 
         ( + )   S t o p   t h e   T I M   P W M   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   P W M   T i m e   B a s e   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ H a n d l e T y p e D e f   a n d   i n i t i a l i z e s   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ P W M _ D e I n i t ( )   b e f o r e   H A L _ T I M _ P W M _ I n i t ( ) 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > P W M _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > P W M _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ P W M _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > P W M _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M _ P W M _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   I n i t   t h e   b a s e   t i m e   f o r   t h e   P W M   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > P W M _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > P W M _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ P W M _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > P W M _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
     H A L _ T I M _ P W M _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   C h a n g e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   P W M   M S P . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P W M _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P W M _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   P W M   M S P . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P W M _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P W M _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   P W M   s i g n a l   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   P W M   s i g n a l   g e n e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   P W M   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   P W M   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   P W M   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ p a r a m     p D a t a   T h e   s o u r c e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   m e m o r y   t o   T I M   p e r i p h e r a l 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l )   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 3 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   O u t p u t   C a p t u r e / C o m p a r e   3   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ,   ( u i n t 3 2 _ t ) p D a t a ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 4 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   P W M   s i g n a l   g e n e r a t i o n   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 4   T I M   I n p u t   C a p t u r e   f u n c t i o n s 
     *     @ b r i e f         T I M   I n p u t   C a p t u r e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                             # # # # #   T I M   I n p u t   C a p t u r e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
   [ . . ] 
       T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
       ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   I n p u t   C a p t u r e . 
       ( + )   D e - i n i t i a l i z e   t h e   T I M   I n p u t   C a p t u r e . 
       ( + )   S t a r t   t h e   T I M   I n p u t   C a p t u r e . 
       ( + )   S t o p   t h e   T I M   I n p u t   C a p t u r e . 
       ( + )   S t a r t   t h e   T I M   I n p u t   C a p t u r e   a n d   e n a b l e   i n t e r r u p t . 
       ( + )   S t o p   t h e   T I M   I n p u t   C a p t u r e   a n d   d i s a b l e   i n t e r r u p t . 
       ( + )   S t a r t   t h e   T I M   I n p u t   C a p t u r e   a n d   e n a b l e   D M A   t r a n s f e r . 
       ( + )   S t o p   t h e   T I M   I n p u t   C a p t u r e   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   I n p u t   C a p t u r e   T i m e   b a s e   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ H a n d l e T y p e D e f   a n d   i n i t i a l i z e s   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ I C _ D e I n i t ( )   b e f o r e   H A L _ T I M _ I C _ I n i t ( ) 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > I C _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > I C _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ I C _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > I C _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M _ I C _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   I n i t   t h e   b a s e   t i m e   f o r   t h e   i n p u t   c a p t u r e   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > I C _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > I C _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ I C _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > I C _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
     H A L _ T I M _ I C _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   C h a n g e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T _ A L L ( h t i m ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   I n p u t   C a p t u r e   M S P . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ I C _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ I C _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   I n p u t   C a p t u r e   M S P . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ I C _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ I C _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( ( c h a n n e l _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( ( c h a n n e l _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4   i n t e r r u p t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ p a r a m     p D a t a   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   T I M   p e r i p h e r a l   t o   m e m o r y . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ C C _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     i f   ( ( c h a n n e l _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( ( c h a n n e l _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                       & &   ( c o m p l e m e n t a r y _ c h a n n e l _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         i f   ( ( p D a t a   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   E n a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ E N A B L E ) ; 
 
     / *   E n a b l e   t h e   P e r i p h e r a l ,   e x c e p t   i n   t r i g g e r   m o d e   w h e r e   e n a b l e   i s   a u t o m a t i c a l l y   d o n e   w i t h   t r i g g e r   * / 
     i f   ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) 
     { 
         t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R   &   T I M _ S M C R _ S M S ; 
         i f   ( ! I S _ T I M _ S L A V E M O D E _ T R I G G E R _ E N A B L E D ( t m p s m c r ) ) 
         { 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
         } 
     } 
     e l s e 
     { 
         _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 ,   ( u i n t 3 2 _ t ) p D a t a , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 ,   ( u i n t 3 2 _ t ) p D a t a , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 3 ,   ( u i n t 3 2 _ t ) p D a t a , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 4 ,   ( u i n t 3 2 _ t ) p D a t a , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   I n p u t   C a p t u r e   m e a s u r e m e n t   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   I n p u t   C a p t u r e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ C C _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   C h a n n e l ,   T I M _ C C x _ D I S A B L E ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   3     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 3 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   4     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 4 ) ; 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 5   T I M   O n e   P u l s e   f u n c t i o n s 
     *     @ b r i e f         T I M   O n e   P u l s e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                 # # # # #   T I M   O n e   P u l s e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   O n e   P u l s e . 
         ( + )   D e - i n i t i a l i z e   t h e   T I M   O n e   P u l s e . 
         ( + )   S t a r t   t h e   T I M   O n e   P u l s e . 
         ( + )   S t o p   t h e   T I M   O n e   P u l s e . 
         ( + )   S t a r t   t h e   T I M   O n e   P u l s e   a n d   e n a b l e   i n t e r r u p t . 
         ( + )   S t o p   t h e   T I M   O n e   P u l s e   a n d   d i s a b l e   i n t e r r u p t . 
         ( + )   S t a r t   t h e   T I M   O n e   P u l s e   a n d   e n a b l e   D M A   t r a n s f e r . 
         ( + )   S t o p   t h e   T I M   O n e   P u l s e   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O n e   P u l s e   T i m e   B a s e   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ H a n d l e T y p e D e f   a n d   i n i t i a l i z e s   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ O n e P u l s e _ D e I n i t ( )   b e f o r e   H A L _ T I M _ O n e P u l s e _ I n i t ( ) 
     *   @ n o t e       W h e n   t h e   t i m e r   i n s t a n c e   i s   i n i t i a l i z e d   i n   O n e   P u l s e   m o d e ,   t i m e r 
     *                   c h a n n e l s   1   a n d   c h a n n e l   2   a r e   r e s e r v e d   a n d   c a n n o t   b e   u s e d   f o r   o t h e r 
     *                   p u r p o s e . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O n e P u l s e M o d e   S e l e c t   t h e   O n e   p u l s e   m o d e . 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ O P M O D E _ S I N G L E :   O n l y   o n e   p u l s e   w i l l   b e   g e n e r a t e d . 
     *                         @ a r g   T I M _ O P M O D E _ R E P E T I T I V E :   R e p e t i t i v e   p u l s e s   w i l l   b e   g e n e r a t e d . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O n e P u l s e M o d e ) 
 { 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O P M _ M O D E ( O n e P u l s e M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ O n e P u l s e _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M _ O n e P u l s e _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   C o n f i g u r e   t h e   T i m e   b a s e   i n   t h e   O n e   P u l s e   M o d e   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   R e s e t   t h e   O P M   B i t   * / 
     h t i m - > I n s t a n c e - > C R 1   & =   ~ T I M _ C R 1 _ O P M ; 
 
     / *   C o n f i g u r e   t h e   O P M   M o d e   * / 
     h t i m - > I n s t a n c e - > C R 1   | =   O n e P u l s e M o d e ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   I n i t i a l i z e   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   O n e   P u l s e 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * / 
     H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   S e t   t h e   T I M   c h a n n e l   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O n e   P u l s e   M S P . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ O n e P u l s e _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ O n e P u l s e _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   O n e   P u l s e   M S P . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n . 
     *   @ n o t e   T h o u g h   O u t p u t C h a n n e l   p a r a m e t e r   i s   d e p r e c a t e d   a n d   i g n o r e d   b y   t h e   f u n c t i o n 
     *                 i t   h a s   b e e n   k e p t   t o   a v o i d   H A L _ T I M   A P I   c o m p a t i b i l i t y   b r e a k . 
     *   @ n o t e   T h e   p u l s e   o u t p u t   c h a n n e l   i s   d e t e r m i n e d   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   S e e   n o t e   a b o v e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( O u t p u t C h a n n e l ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l s 
         ( i n   t h e   O P M   M o d e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 ) 
         i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   o u t p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   i n p u t   a n d 
         i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   i n p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   o u t p u t 
         w h a t e v e r   t h e   c o m b i n a t i o n ,   t h e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2   s h o u l d   b e   e n a b l e d   t o g e t h e r 
 
         N o   n e e d   t o   e n a b l e   t h e   c o u n t e r ,   i t ' s   e n a b l e d   a u t o m a t i c a l l y   b y   h a r d w a r e 
         ( t h e   c o u n t e r   s t a r t s   i n   r e s p o n s e   t o   a   s t i m u l u s   a n d   g e n e r a t e   a   p u l s e   * / 
 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n . 
     *   @ n o t e   T h o u g h   O u t p u t C h a n n e l   p a r a m e t e r   i s   d e p r e c a t e d   a n d   i g n o r e d   b y   t h e   f u n c t i o n 
     *                 i t   h a s   b e e n   k e p t   t o   a v o i d   H A L _ T I M   A P I   c o m p a t i b i l i t y   b r e a k . 
     *   @ n o t e   T h e   p u l s e   o u t p u t   c h a n n e l   i s   d e t e r m i n e d   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   S e e   n o t e   a b o v e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( O u t p u t C h a n n e l ) ; 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l s 
     ( i n   t h e   O P M   M o d e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 ) 
     i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   o u t p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   i n p u t   a n d 
     i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   i n p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   o u t p u t 
     w h a t e v e r   t h e   c o m b i n a t i o n ,   t h e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2   s h o u l d   b e   d i s a b l e d   t o g e t h e r   * / 
 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ n o t e   T h o u g h   O u t p u t C h a n n e l   p a r a m e t e r   i s   d e p r e c a t e d   a n d   i g n o r e d   b y   t h e   f u n c t i o n 
     *                 i t   h a s   b e e n   k e p t   t o   a v o i d   H A L _ T I M   A P I   c o m p a t i b i l i t y   b r e a k . 
     *   @ n o t e   T h e   p u l s e   o u t p u t   c h a n n e l   i s   d e t e r m i n e d   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   S e e   n o t e   a b o v e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( O u t p u t C h a n n e l ) ; 
 
     / *   C h e c k   t h e   T I M   c h a n n e l s   s t a t e   * / 
     i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
             | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
 
     / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l s 
         ( i n   t h e   O P M   M o d e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 ) 
         i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   o u t p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   i n p u t   a n d 
         i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   i n p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   o u t p u t 
         w h a t e v e r   t h e   c o m b i n a t i o n ,   t h e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2   s h o u l d   b e   e n a b l e d   t o g e t h e r 
 
         N o   n e e d   t o   e n a b l e   t h e   c o u n t e r ,   i t ' s   e n a b l e d   a u t o m a t i c a l l y   b y   h a r d w a r e 
         ( t h e   c o u n t e r   s t a r t s   i n   r e s p o n s e   t o   a   s t i m u l u s   a n d   g e n e r a t e   a   p u l s e   * / 
 
     / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   E n a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   E n a b l e   t h e   m a i n   o u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ E N A B L E ( h t i m ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   O n e   P u l s e   s i g n a l   g e n e r a t i o n   i n   i n t e r r u p t   m o d e . 
     *   @ n o t e   T h o u g h   O u t p u t C h a n n e l   p a r a m e t e r   i s   d e p r e c a t e d   a n d   i g n o r e d   b y   t h e   f u n c t i o n 
     *                 i t   h a s   b e e n   k e p t   t o   a v o i d   H A L _ T I M   A P I   c o m p a t i b i l i t y   b r e a k . 
     *   @ n o t e   T h e   p u l s e   o u t p u t   c h a n n e l   i s   d e t e r m i n e d   w h e n   c a l l i n g 
     *               @ r e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( ) . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     O u t p u t C h a n n e l   S e e   n o t e   a b o v e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   O u t p u t C h a n n e l ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( O u t p u t C h a n n e l ) ; 
 
     / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   1   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
 
     / *   D i s a b l e   t h e   T I M   C a p t u r e / C o m p a r e   2   i n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
 
     / *   D i s a b l e   t h e   C a p t u r e   c o m p a r e   a n d   t h e   I n p u t   C a p t u r e   c h a n n e l s 
     ( i n   t h e   O P M   M o d e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 ) 
     i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   o u t p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   i n p u t   a n d 
     i f   T I M _ C H A N N E L _ 1   i s   u s e d   a s   i n p u t ,   t h e   T I M _ C H A N N E L _ 2   w i l l   b e   u s e d   a s   o u t p u t 
     w h a t e v e r   t h e   c o m b i n a t i o n ,   t h e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2   s h o u l d   b e   d i s a b l e d   t o g e t h e r   * / 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
     T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( h t i m - > I n s t a n c e )   ! =   R E S E T ) 
     { 
         / *   D i s a b l e   t h e   M a i n   O u t p u t   * / 
         _ _ H A L _ T I M _ M O E _ D I S A B L E ( h t i m ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 6   T I M   E n c o d e r   f u n c t i o n s 
     *     @ b r i e f         T I M   E n c o d e r   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                     # # # # #   T I M   E n c o d e r   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
         ( + )   I n i t i a l i z e   a n d   c o n f i g u r e   t h e   T I M   E n c o d e r . 
         ( + )   D e - i n i t i a l i z e   t h e   T I M   E n c o d e r . 
         ( + )   S t a r t   t h e   T I M   E n c o d e r . 
         ( + )   S t o p   t h e   T I M   E n c o d e r . 
         ( + )   S t a r t   t h e   T I M   E n c o d e r   a n d   e n a b l e   i n t e r r u p t . 
         ( + )   S t o p   t h e   T I M   E n c o d e r   a n d   d i s a b l e   i n t e r r u p t . 
         ( + )   S t a r t   t h e   T I M   E n c o d e r   a n d   e n a b l e   D M A   t r a n s f e r . 
         ( + )   S t o p   t h e   T I M   E n c o d e r   a n d   d i s a b l e   D M A   t r a n s f e r . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   E n c o d e r   I n t e r f a c e   a n d   i n i t i a l i z e   t h e   a s s o c i a t e d   h a n d l e . 
     *   @ n o t e       S w i t c h i n g   f r o m   C e n t e r   A l i g n e d   c o u n t e r   m o d e   t o   E d g e   c o u n t e r   m o d e   ( o r   r e v e r s e ) 
     *                   r e q u i r e s   a   t i m e r   r e s e t   t o   a v o i d   u n e x p e c t e d   d i r e c t i o n 
     *                   d u e   t o   D I R   b i t   r e a d o n l y   i n   c e n t e r   a l i g n e d   m o d e . 
     *                   E x :   c a l l   @ r e f   H A L _ T I M _ E n c o d e r _ D e I n i t ( )   b e f o r e   H A L _ T I M _ E n c o d e r _ I n i t ( ) 
     *   @ n o t e       E n c o d e r   m o d e   a n d   E x t e r n a l   c l o c k   m o d e   2   a r e   n o t   c o m p a t i b l e   a n d   m u s t   n o t   b e   s e l e c t e d   t o g e t h e r 
     *                   E x :   A   c a l l   f o r   @ r e f   H A L _ T I M _ E n c o d e r _ I n i t   w i l l   e r a s e   t h e   s e t t i n g s   o f   @ r e f   H A L _ T I M _ C o n f i g C l o c k S o u r c e 
     *                   u s i n g   T I M _ C L O C K S O U R C E _ E T R M O D E 2   a n d   v i c e   v e r s a 
     *   @ n o t e       W h e n   t h e   t i m e r   i n s t a n c e   i s   i n i t i a l i z e d   i n   E n c o d e r   m o d e ,   t i m e r 
     *                   c h a n n e l s   1   a n d   c h a n n e l   2   a r e   r e s e r v e d   a n d   c a n n o t   b e   u s e d   f o r   o t h e r 
     *                   p u r p o s e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   E n c o d e r   I n t e r f a c e   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ,     T I M _ E n c o d e r _ I n i t T y p e D e f   * s C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   C h e c k   t h e   T I M   h a n d l e   a l l o c a t i o n   * / 
     i f   ( h t i m   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C O U N T E R _ M O D E ( h t i m - > I n i t . C o u n t e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K D I V I S I O N _ D I V ( h t i m - > I n i t . C l o c k D i v i s i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ A U T O R E L O A D _ P R E L O A D ( h t i m - > I n i t . A u t o R e l o a d P r e l o a d ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ M O D E ( s C o n f i g - > E n c o d e r M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ S E L E C T I O N ( s C o n f i g - > I C 1 S e l e c t i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ S E L E C T I O N ( s C o n f i g - > I C 2 S e l e c t i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R I N P U T _ P O L A R I T Y ( s C o n f i g - > I C 1 P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R I N P U T _ P O L A R I T Y ( s C o n f i g - > I C 2 P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P R E S C A L E R ( s C o n f i g - > I C 1 P r e s c a l e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P R E S C A L E R ( s C o n f i g - > I C 2 P r e s c a l e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ F I L T E R ( s C o n f i g - > I C 1 F i l t e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ F I L T E R ( s C o n f i g - > I C 2 F i l t e r ) ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * / 
         h t i m - > L o c k   =   H A L _ U N L O C K E D ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
         / *   R e s e t   i n t e r r u p t   c a l l b a c k s   t o   l e g a c y   w e a k   c a l l b a c k s   * / 
         T I M _ R e s e t C a l l b a c k ( h t i m ) ; 
 
         i f   ( h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k   = =   N U L L ) 
         { 
             h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k   =   H A L _ T I M _ E n c o d e r _ M s p I n i t ; 
         } 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   * / 
         h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K ,   N V I C   a n d   D M A   * / 
         H A L _ T I M _ E n c o d e r _ M s p I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
     } 
 
     / *   S e t   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   R e s e t   t h e   S M S   a n d   E C E   b i t s   * / 
     h t i m - > I n s t a n c e - > S M C R   & =   ~ ( T I M _ S M C R _ S M S   |   T I M _ S M C R _ E C E ) ; 
 
     / *   C o n f i g u r e   t h e   T i m e   b a s e   i n   t h e   E n c o d e r   M o d e   * / 
     T I M _ B a s e _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & h t i m - > I n i t ) ; 
 
     / *   G e t   t h e   T I M x   S M C R   r e g i s t e r   v a l u e   * / 
     t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R ; 
 
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * / 
     t m p c c m r 1   =   h t i m - > I n s t a n c e - > C C M R 1 ; 
 
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * / 
     t m p c c e r   =   h t i m - > I n s t a n c e - > C C E R ; 
 
     / *   S e t   t h e   e n c o d e r   M o d e   * / 
     t m p s m c r   | =   s C o n f i g - > E n c o d e r M o d e ; 
 
     / *   S e l e c t   t h e   C a p t u r e   C o m p a r e   1   a n d   t h e   C a p t u r e   C o m p a r e   2   a s   i n p u t   * / 
     t m p c c m r 1   & =   ~ ( T I M _ C C M R 1 _ C C 1 S   |   T I M _ C C M R 1 _ C C 2 S ) ; 
     t m p c c m r 1   | =   ( s C o n f i g - > I C 1 S e l e c t i o n   |   ( s C o n f i g - > I C 2 S e l e c t i o n   < <   8 U ) ) ; 
 
     / *   S e t   t h e   C a p t u r e   C o m p a r e   1   a n d   t h e   C a p t u r e   C o m p a r e   2   p r e s c a l e r s   a n d   f i l t e r s   * / 
     t m p c c m r 1   & =   ~ ( T I M _ C C M R 1 _ I C 1 P S C   |   T I M _ C C M R 1 _ I C 2 P S C ) ; 
     t m p c c m r 1   & =   ~ ( T I M _ C C M R 1 _ I C 1 F   |   T I M _ C C M R 1 _ I C 2 F ) ; 
     t m p c c m r 1   | =   s C o n f i g - > I C 1 P r e s c a l e r   |   ( s C o n f i g - > I C 2 P r e s c a l e r   < <   8 U ) ; 
     t m p c c m r 1   | =   ( s C o n f i g - > I C 1 F i l t e r   < <   4 U )   |   ( s C o n f i g - > I C 2 F i l t e r   < <   1 2 U ) ; 
 
     / *   S e t   t h e   T I 1   a n d   t h e   T I 2   P o l a r i t i e s   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 2 P ) ; 
     t m p c c e r   | =   s C o n f i g - > I C 1 P o l a r i t y   |   ( s C o n f i g - > I C 2 P o l a r i t y   < <   4 U ) ; 
 
     / *   W r i t e   t o   T I M x   S M C R   * / 
     h t i m - > I n s t a n c e - > S M C R   =   t m p s m c r ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   * / 
     h t i m - > I n s t a n c e - > C C M R 1   =   t m p c c m r 1 ; 
 
     / *   W r i t e   t o   T I M x   C C E R   * / 
     h t i m - > I n s t a n c e - > C C E R   =   t m p c c e r ; 
 
     / *   I n i t i a l i z e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
 
     / *   I n i t i a l i z e   t h e   T I M   s t a t e * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   T I M   E n c o d e r   i n t e r f a c e 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   D i s a b l e   t h e   T I M   P e r i p h e r a l   C l o c k   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     i f   ( h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k   = =   N U L L ) 
     { 
         h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M _ E n c o d e r _ M s p D e I n i t ; 
     } 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * / 
     h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e :   G P I O ,   C L O C K ,   N V I C   * / 
     H A L _ T I M _ E n c o d e r _ M s p D e I n i t ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E S E T ; 
 
     / *   S e t   t h e   T I M   c h a n n e l s   s t a t e   * / 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
     T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E S E T ) ; 
 
     / *   C h a n g e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E S E T ; 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   E n c o d e r   I n t e r f a c e   M S P . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ E n c o d e r _ M s p I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ E n c o d e r _ M s p I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     D e I n i t i a l i z e s   T I M   E n c o d e r   I n t e r f a c e   M S P . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ E n c o d e r _ M s p D e I n i t ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ E n c o d e r _ M s p D e I n i t   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   E n c o d e r   I n t e r f a c e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         i f   ( ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
 
     / *   E n a b l e   t h e   e n c o d e r   i n t e r f a c e   c h a n n e l s   * / 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t   : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
             b r e a k ; 
         } 
     } 
     / *   E n a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   E n c o d e r   I n t e r f a c e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l s   1   a n d   2 
         ( i n   t h e   E n c o d e r I n t e r f a c e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 )   * / 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t   : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
             b r e a k ; 
         } 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   | |   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) ) 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   E n c o d e r   I n t e r f a c e   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         i f   ( ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
     e l s e 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   ! =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
         } 
     } 
 
     / *   E n a b l e   t h e   e n c o d e r   i n t e r f a c e   c h a n n e l s   * / 
     / *   E n a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   1   a n d / o r   2   * / 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t   : 
         { 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
             _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             b r e a k ; 
         } 
     } 
 
     / *   E n a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   E n c o d e r   I n t e r f a c e   i n   i n t e r r u p t   m o d e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   d i s a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l s   1   a n d   2 
         ( i n   t h e   E n c o d e r I n t e r f a c e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 )   * / 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   1   * / 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   2   * / 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
     } 
     e l s e 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   I n t e r r u p t s   1   a n d   2   * / 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
         _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   | |   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) ) 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t a r t s   t h e   T I M   E n c o d e r   I n t e r f a c e   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ p a r a m     p D a t a 1   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s   f o r   I C 1 . 
     *   @ p a r a m     p D a t a 2   T h e   d e s t i n a t i o n   B u f f e r   a d d r e s s   f o r   I C 2 . 
     *   @ p a r a m     L e n g t h   T h e   l e n g t h   o f   d a t a   t o   b e   t r a n s f e r r e d   f r o m   T I M   p e r i p h e r a l   t o   m e m o r y . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t a r t _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   * p D a t a 1 , 
                                                                                         u i n t 3 2 _ t   * p D a t a 2 ,   u i n t 1 6 _ t   L e n g t h ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 1 ) ; 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   =   T I M _ C H A N N E L _ N _ S T A T E _ G E T ( h t i m ,   T I M _ C H A N N E L _ 2 ) ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ) 
         { 
             r e t u r n   H A L _ B U S Y ; 
         } 
         e l s e   i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                           & &   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             i f   ( ( p D a t a 1   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             e l s e 
             { 
                 T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
                 T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             } 
         } 
         e l s e 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         i f   ( ( c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ) 
         { 
             r e t u r n   H A L _ B U S Y ; 
         } 
         e l s e   i f   ( ( c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                           & &   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             i f   ( ( p D a t a 2   = =   N U L L )   & &   ( L e n g t h   >   0 U ) ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             e l s e 
             { 
                 T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
                 T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             } 
         } 
         e l s e 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
     } 
     e l s e 
     { 
         i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
                 | |   ( c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) 
                 | |   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ) 
         { 
             r e t u r n   H A L _ B U S Y ; 
         } 
         e l s e   i f   ( ( c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                           & &   ( c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                           & &   ( c o m p l e m e n t a r y _ c h a n n e l _ 1 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) 
                           & &   ( c o m p l e m e n t a r y _ c h a n n e l _ 2 _ s t a t e   = =   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ) 
         { 
             i f   ( ( ( ( p D a t a 1   = =   N U L L )   | |   ( p D a t a 2   = =   N U L L ) ) )   & &   ( L e n g t h   >   0 U ) ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             e l s e 
             { 
                 T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
                 T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
                 T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
                 T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ B U S Y ) ; 
             } 
         } 
         e l s e 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 ,   ( u i n t 3 2 _ t ) p D a t a 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   I n p u t   C a p t u r e   D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
 
             / *   E n a b l e   t h e   P e r i p h e r a l   * / 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
 
             / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r ; 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 ,   ( u i n t 3 2 _ t ) p D a t a 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   T I M   I n p u t   C a p t u r e     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
 
             / *   E n a b l e   t h e   P e r i p h e r a l   * / 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
 
             / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ A L L : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 1 ,   ( u i n t 3 2 _ t ) p D a t a 1 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > C C R 2 ,   ( u i n t 3 2 _ t ) p D a t a 2 , 
                                                   L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             / *   E n a b l e   t h e   P e r i p h e r a l   * / 
             _ _ H A L _ T I M _ E N A B L E ( h t i m ) ; 
 
             / *   E n a b l e   t h e   C a p t u r e   c o m p a r e   c h a n n e l   * / 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ E N A B L E ) ; 
             T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ E N A B L E ) ; 
 
             / *   E n a b l e   t h e   T I M   I n p u t   C a p t u r e     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
             / *   E n a b l e   t h e   T I M   I n p u t   C a p t u r e     D M A   r e q u e s t   * / 
             _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   E n c o d e r   I n t e r f a c e   i n   D M A   m o d e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ A L L :   T I M   C h a n n e l   1   a n d   T I M   C h a n n e l   2   a r e   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ E n c o d e r _ S t o p _ D M A ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ E N C O D E R _ I N T E R F A C E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     / *   D i s a b l e   t h e   I n p u t   C a p t u r e   c h a n n e l s   1   a n d   2 
         ( i n   t h e   E n c o d e r I n t e r f a c e   t h e   t w o   p o s s i b l e   c h a n n e l s   t h a t   c a n   b e   u s e d   a r e   T I M _ C H A N N E L _ 1   a n d   T I M _ C H A N N E L _ 2 )   * / 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   D M A   R e q u e s t   1   * / 
         _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
         ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   D M A   R e q u e s t   2   * / 
         _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
         ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
     } 
     e l s e 
     { 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 1 ,   T I M _ C C x _ D I S A B L E ) ; 
         T I M _ C C x C h a n n e l C m d ( h t i m - > I n s t a n c e ,   T I M _ C H A N N E L _ 2 ,   T I M _ C C x _ D I S A B L E ) ; 
 
         / *   D i s a b l e   t h e   c a p t u r e   c o m p a r e   D M A   R e q u e s t   1   a n d   2   * / 
         _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 1 ) ; 
         _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ C C 2 ) ; 
         ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
         ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
     } 
 
     / *   D i s a b l e   t h e   P e r i p h e r a l   * / 
     _ _ H A L _ T I M _ D I S A B L E ( h t i m ) ; 
 
     / *   S e t   t h e   T I M   c h a n n e l ( s )   s t a t e   * / 
     i f   ( ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 )   | |   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) ) 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   C h a n n e l ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e 
     { 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 7   T I M   I R Q   h a n d l e r   m a n a g e m e n t 
     *     @ b r i e f         T I M   I R Q   h a n d l e r   m a n a g e m e n t 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                 # # # # #   I R Q   h a n d l e r   m a n a g e m e n t   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
     [ . . ] 
         T h i s   s e c t i o n   p r o v i d e s   T i m e r   I R Q   h a n d l e r   f u n c t i o n . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 / * * 
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   T I M   i n t e r r u p t s   r e q u e s t s . 
     *   @ p a r a m     h t i m   T I M     h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   H A L _ T I M _ I R Q H a n d l e r ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C a p t u r e   c o m p a r e   1   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ C C 1 )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ C C 1 )   ! =   R E S E T ) 
         { 
             { 
                 _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ C C 1 ) ; 
                 h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
 
                 / *   I n p u t   c a p t u r e   e v e n t   * / 
                 i f   ( ( h t i m - > I n s t a n c e - > C C M R 1   &   T I M _ C C M R 1 _ C C 1 S )   ! =   0 x 0 0 U ) 
                 { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                     h t i m - > I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e l s e 
                     H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
                 } 
                 / *   O u t p u t   c o m p a r e   e v e n t   * / 
                 e l s e 
                 { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                     h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                     h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
                     H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                     H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
                 } 
                 h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
             } 
         } 
     } 
     / *   C a p t u r e   c o m p a r e   2   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ C C 2 )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ C C 2 )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ C C 2 ) ; 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
             / *   I n p u t   c a p t u r e   e v e n t   * / 
             i f   ( ( h t i m - > I n s t a n c e - > C C M R 1   &   T I M _ C C M R 1 _ C C 2 S )   ! =   0 x 0 0 U ) 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             / *   O u t p u t   c o m p a r e   e v e n t   * / 
             e l s e 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
         } 
     } 
     / *   C a p t u r e   c o m p a r e   3   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ C C 3 )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ C C 3 )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ C C 3 ) ; 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
             / *   I n p u t   c a p t u r e   e v e n t   * / 
             i f   ( ( h t i m - > I n s t a n c e - > C C M R 2   &   T I M _ C C M R 2 _ C C 3 S )   ! =   0 x 0 0 U ) 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             / *   O u t p u t   c o m p a r e   e v e n t   * / 
             e l s e 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
         } 
     } 
     / *   C a p t u r e   c o m p a r e   4   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ C C 4 )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ C C 4 )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ C C 4 ) ; 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
             / *   I n p u t   c a p t u r e   e v e n t   * / 
             i f   ( ( h t i m - > I n s t a n c e - > C C M R 2   &   T I M _ C C M R 2 _ C C 4 S )   ! =   0 x 0 0 U ) 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             / *   O u t p u t   c o m p a r e   e v e n t   * / 
             e l s e 
             { 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
                 h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
                 H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( h t i m ) ; 
                 H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
             } 
             h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
         } 
     } 
     / *   T I M   U p d a t e   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ U P D A T E )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ U P D A T E )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ U P D A T E ) ; 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
             h t i m - > P e r i o d E l a p s e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
             H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
         } 
     } 
     / *   T I M   B r e a k   i n p u t   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ B R E A K )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ B R E A K )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ B R E A K ) ; 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
             h t i m - > B r e a k C a l l b a c k ( h t i m ) ; 
 # e l s e 
             H A L _ T I M E x _ B r e a k C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
         } 
     } 
     / *   T I M   T r i g g e r   d e t e c t i o n   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ T R I G G E R )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ T R I G G E R )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ I T _ T R I G G E R ) ; 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
             h t i m - > T r i g g e r C a l l b a c k ( h t i m ) ; 
 # e l s e 
             H A L _ T I M _ T r i g g e r C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
         } 
     } 
     / *   T I M   c o m m u t a t i o n   e v e n t   * / 
     i f   ( _ _ H A L _ T I M _ G E T _ F L A G ( h t i m ,   T I M _ F L A G _ C O M )   ! =   R E S E T ) 
     { 
         i f   ( _ _ H A L _ T I M _ G E T _ I T _ S O U R C E ( h t i m ,   T I M _ I T _ C O M )   ! =   R E S E T ) 
         { 
             _ _ H A L _ T I M _ C L E A R _ I T ( h t i m ,   T I M _ F L A G _ C O M ) ; 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
             h t i m - > C o m m u t a t i o n C a l l b a c k ( h t i m ) ; 
 # e l s e 
             H A L _ T I M E x _ C o m m u t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
         } 
     } 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 8   T I M   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     *     @ b r i e f         T I M   P e r i p h e r a l   C o n t r o l   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                       # # # # #   P e r i p h e r a l   C o n t r o l   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
   [ . . ] 
       T h i s   s e c t i o n   p r o v i d e s   f u n c t i o n s   a l l o w i n g   t o : 
             ( + )   C o n f i g u r e   T h e   I n p u t   O u t p u t   c h a n n e l s   f o r   O C ,   P W M ,   I C   o r   O n e   P u l s e   m o d e . 
             ( + )   C o n f i g u r e   E x t e r n a l   C l o c k   s o u r c e . 
             ( + )   C o n f i g u r e   C o m p l e m e n t a r y   c h a n n e l s ,   b r e a k   f e a t u r e s   a n d   d e a d   t i m e . 
             ( + )   C o n f i g u r e   M a s t e r   a n d   t h e   S l a v e   s y n c h r o n i z a t i o n . 
             ( + )   C o n f i g u r e   t h e   D M A   B u r s t   M o d e . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O u t p u t   C o m p a r e   C h a n n e l s   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ O C _ I n i t T y p e D e f . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   O u t p u t   C o m p a r e   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   c o n f i g u r e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O C _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                       T I M _ O C _ I n i t T y p e D e f   * s C o n f i g , 
                                                                                       u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C H A N N E L S ( C h a n n e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O C _ M O D E ( s C o n f i g - > O C M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O C _ P O L A R I T Y ( s C o n f i g - > O C P o l a r i t y ) ) ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   T I M   C h a n n e l   1   i n   O u t p u t   C o m p a r e   * / 
             T I M _ O C 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   T I M   C h a n n e l   2   i n   O u t p u t   C o m p a r e   * / 
             T I M _ O C 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   T I M   C h a n n e l   3   i n   O u t p u t   C o m p a r e   * / 
             T I M _ O C 3 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   T I M   C h a n n e l   4   i n   O u t p u t   C o m p a r e   * / 
             T I M _ O C 4 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   I n p u t   C a p t u r e   C h a n n e l s   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ I C _ I n i t T y p e D e f . 
     *   @ p a r a m     h t i m   T I M   I C   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   I n p u t   C a p t u r e   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l   t o   c o n f i g u r e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ I C _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ I C _ I n i t T y p e D e f   * s C o n f i g ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P O L A R I T Y ( s C o n f i g - > I C P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ S E L E C T I O N ( s C o n f i g - > I C S e l e c t i o n ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ P R E S C A L E R ( s C o n f i g - > I C P r e s c a l e r ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ I C _ F I L T E R ( s C o n f i g - > I C F i l t e r ) ) ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 1 ) 
     { 
         / *   T I 1   C o n f i g u r a t i o n   * / 
         T I M _ T I 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                             s C o n f i g - > I C P o l a r i t y , 
                                             s C o n f i g - > I C S e l e c t i o n , 
                                             s C o n f i g - > I C F i l t e r ) ; 
 
         / *   R e s e t   t h e   I C 1 P S C   B i t s   * / 
         h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 1 P S C ; 
 
         / *   S e t   t h e   I C 1 P S C   v a l u e   * / 
         h t i m - > I n s t a n c e - > C C M R 1   | =   s C o n f i g - > I C P r e s c a l e r ; 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 2 ) 
     { 
         / *   T I 2   C o n f i g u r a t i o n   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
         T I M _ T I 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                             s C o n f i g - > I C P o l a r i t y , 
                                             s C o n f i g - > I C S e l e c t i o n , 
                                             s C o n f i g - > I C F i l t e r ) ; 
 
         / *   R e s e t   t h e   I C 2 P S C   B i t s   * / 
         h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 2 P S C ; 
 
         / *   S e t   t h e   I C 2 P S C   v a l u e   * / 
         h t i m - > I n s t a n c e - > C C M R 1   | =   ( s C o n f i g - > I C P r e s c a l e r   < <   8 U ) ; 
     } 
     e l s e   i f   ( C h a n n e l   = =   T I M _ C H A N N E L _ 3 ) 
     { 
         / *   T I 3   C o n f i g u r a t i o n   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
         T I M _ T I 3 _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                             s C o n f i g - > I C P o l a r i t y , 
                                             s C o n f i g - > I C S e l e c t i o n , 
                                             s C o n f i g - > I C F i l t e r ) ; 
 
         / *   R e s e t   t h e   I C 3 P S C   B i t s   * / 
         h t i m - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ I C 3 P S C ; 
 
         / *   S e t   t h e   I C 3 P S C   v a l u e   * / 
         h t i m - > I n s t a n c e - > C C M R 2   | =   s C o n f i g - > I C P r e s c a l e r ; 
     } 
     e l s e 
     { 
         / *   T I 4   C o n f i g u r a t i o n   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
         T I M _ T I 4 _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                             s C o n f i g - > I C P o l a r i t y , 
                                             s C o n f i g - > I C S e l e c t i o n , 
                                             s C o n f i g - > I C F i l t e r ) ; 
 
         / *   R e s e t   t h e   I C 4 P S C   B i t s   * / 
         h t i m - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ I C 4 P S C ; 
 
         / *   S e t   t h e   I C 4 P S C   v a l u e   * / 
         h t i m - > I n s t a n c e - > C C M R 2   | =   ( s C o n f i g - > I C P r e s c a l e r   < <   8 U ) ; 
     } 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   P W M     c h a n n e l s   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ O C _ I n i t T y p e D e f . 
     *   @ p a r a m     h t i m   T I M   P W M   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   P W M   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   c o n f i g u r e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ P W M _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                         T I M _ O C _ I n i t T y p e D e f   * s C o n f i g , 
                                                                                         u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C H A N N E L S ( C h a n n e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ P W M _ M O D E ( s C o n f i g - > O C M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O C _ P O L A R I T Y ( s C o n f i g - > O C P o l a r i t y ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ F A S T _ S T A T E ( s C o n f i g - > O C F a s t M o d e ) ) ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   C h a n n e l   1   i n   P W M   m o d e   * / 
             T I M _ O C 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
 
             / *   S e t   t h e   P r e l o a d   e n a b l e   b i t   f o r   c h a n n e l 1   * / 
             h t i m - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 1 P E ; 
 
             / *   C o n f i g u r e   t h e   O u t p u t   F a s t   m o d e   * / 
             h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 1 F E ; 
             h t i m - > I n s t a n c e - > C C M R 1   | =   s C o n f i g - > O C F a s t M o d e ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   C h a n n e l   2   i n   P W M   m o d e   * / 
             T I M _ O C 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
 
             / *   S e t   t h e   P r e l o a d   e n a b l e   b i t   f o r   c h a n n e l 2   * / 
             h t i m - > I n s t a n c e - > C C M R 1   | =   T I M _ C C M R 1 _ O C 2 P E ; 
 
             / *   C o n f i g u r e   t h e   O u t p u t   F a s t   m o d e   * / 
             h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ O C 2 F E ; 
             h t i m - > I n s t a n c e - > C C M R 1   | =   s C o n f i g - > O C F a s t M o d e   < <   8 U ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   C h a n n e l   3   i n   P W M   m o d e   * / 
             T I M _ O C 3 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
 
             / *   S e t   t h e   P r e l o a d   e n a b l e   b i t   f o r   c h a n n e l 3   * / 
             h t i m - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 3 P E ; 
 
             / *   C o n f i g u r e   t h e   O u t p u t   F a s t   m o d e   * / 
             h t i m - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 3 F E ; 
             h t i m - > I n s t a n c e - > C C M R 2   | =   s C o n f i g - > O C F a s t M o d e ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C o n f i g u r e   t h e   C h a n n e l   4   i n   P W M   m o d e   * / 
             T I M _ O C 4 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g ) ; 
 
             / *   S e t   t h e   P r e l o a d   e n a b l e   b i t   f o r   c h a n n e l 4   * / 
             h t i m - > I n s t a n c e - > C C M R 2   | =   T I M _ C C M R 2 _ O C 4 P E ; 
 
             / *   C o n f i g u r e   t h e   O u t p u t   F a s t   m o d e   * / 
             h t i m - > I n s t a n c e - > C C M R 2   & =   ~ T I M _ C C M R 2 _ O C 4 F E ; 
             h t i m - > I n s t a n c e - > C C M R 2   | =   s C o n f i g - > O C F a s t M o d e   < <   8 U ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     I n i t i a l i z e s   t h e   T I M   O n e   P u l s e   C h a n n e l s   a c c o r d i n g   t o   t h e   s p e c i f i e d 
     *                   p a r a m e t e r s   i n   t h e   T I M _ O n e P u l s e _ I n i t T y p e D e f . 
     *   @ p a r a m     h t i m   T I M   O n e   P u l s e   h a n d l e 
     *   @ p a r a m     s C o n f i g   T I M   O n e   P u l s e   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ p a r a m     O u t p u t C h a n n e l   T I M   o u t p u t   c h a n n e l   t o   c o n f i g u r e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ p a r a m     I n p u t C h a n n e l   T I M   i n p u t   C h a n n e l   t o   c o n f i g u r e 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *   @ n o t e     T o   o u t p u t   a   w a v e f o r m   w i t h   a   m i n i m u m   d e l a y   u s e r   c a n   e n a b l e   t h e   f a s t 
     *                 m o d e   b y   c a l l i n g   t h e   @ r e f   _ _ H A L _ T I M _ E N A B L E _ O C x F A S T   m a c r o .   T h e n   C C x 
     *                 o u t p u t   i s   f o r c e d   i n   r e s p o n s e   t o   t h e   e d g e   d e t e c t i o n   o n   T I x   i n p u t , 
     *                 w i t h o u t   t a k i n g   i n   a c c o u n t   t h e   c o m p a r i s o n . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ O n e P u l s e _ C o n f i g C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ,     T I M _ O n e P u l s e _ I n i t T y p e D e f   * s C o n f i g , 
                                                                                                   u i n t 3 2 _ t   O u t p u t C h a n n e l ,     u i n t 3 2 _ t   I n p u t C h a n n e l ) 
 { 
     T I M _ O C _ I n i t T y p e D e f   t e m p 1 ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ O P M _ C H A N N E L S ( O u t p u t C h a n n e l ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ O P M _ C H A N N E L S ( I n p u t C h a n n e l ) ) ; 
 
     i f   ( O u t p u t C h a n n e l   ! =   I n p u t C h a n n e l ) 
     { 
         / *   P r o c e s s   L o c k e d   * / 
         _ _ H A L _ L O C K ( h t i m ) ; 
 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
         / *   E x t r a c t   t h e   O u t p u t   c o m p a r e   c o n f i g u r a t i o n   f r o m   s C o n f i g   s t r u c t u r e   * / 
         t e m p 1 . O C M o d e   =   s C o n f i g - > O C M o d e ; 
         t e m p 1 . P u l s e   =   s C o n f i g - > P u l s e ; 
         t e m p 1 . O C P o l a r i t y   =   s C o n f i g - > O C P o l a r i t y ; 
         t e m p 1 . O C N P o l a r i t y   =   s C o n f i g - > O C N P o l a r i t y ; 
         t e m p 1 . O C I d l e S t a t e   =   s C o n f i g - > O C I d l e S t a t e ; 
         t e m p 1 . O C N I d l e S t a t e   =   s C o n f i g - > O C N I d l e S t a t e ; 
 
         s w i t c h   ( O u t p u t C h a n n e l ) 
         { 
             c a s e   T I M _ C H A N N E L _ 1 : 
             { 
                 a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
                 T I M _ O C 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & t e m p 1 ) ; 
                 b r e a k ; 
             } 
             c a s e   T I M _ C H A N N E L _ 2 : 
             { 
                 a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
                 T I M _ O C 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   & t e m p 1 ) ; 
                 b r e a k ; 
             } 
             d e f a u l t : 
                 b r e a k ; 
         } 
 
         s w i t c h   ( I n p u t C h a n n e l ) 
         { 
             c a s e   T I M _ C H A N N E L _ 1 : 
             { 
                 a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
                 T I M _ T I 1 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g - > I C P o l a r i t y , 
                                                     s C o n f i g - > I C S e l e c t i o n ,   s C o n f i g - > I C F i l t e r ) ; 
 
                 / *   R e s e t   t h e   I C 1 P S C   B i t s   * / 
                 h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 1 P S C ; 
 
                 / *   S e l e c t   t h e   T r i g g e r   s o u r c e   * / 
                 h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
                 h t i m - > I n s t a n c e - > S M C R   | =   T I M _ T S _ T I 1 F P 1 ; 
 
                 / *   S e l e c t   t h e   S l a v e   M o d e   * / 
                 h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ S M S ; 
                 h t i m - > I n s t a n c e - > S M C R   | =   T I M _ S L A V E M O D E _ T R I G G E R ; 
                 b r e a k ; 
             } 
             c a s e   T I M _ C H A N N E L _ 2 : 
             { 
                 a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
                 T I M _ T I 2 _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C o n f i g - > I C P o l a r i t y , 
                                                     s C o n f i g - > I C S e l e c t i o n ,   s C o n f i g - > I C F i l t e r ) ; 
 
                 / *   R e s e t   t h e   I C 2 P S C   B i t s   * / 
                 h t i m - > I n s t a n c e - > C C M R 1   & =   ~ T I M _ C C M R 1 _ I C 2 P S C ; 
 
                 / *   S e l e c t   t h e   T r i g g e r   s o u r c e   * / 
                 h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ T S ; 
                 h t i m - > I n s t a n c e - > S M C R   | =   T I M _ T S _ T I 2 F P 2 ; 
 
                 / *   S e l e c t   t h e   S l a v e   M o d e   * / 
                 h t i m - > I n s t a n c e - > S M C R   & =   ~ T I M _ S M C R _ S M S ; 
                 h t i m - > I n s t a n c e - > S M C R   | =   T I M _ S L A V E M O D E _ T R I G G E R ; 
                 b r e a k ; 
             } 
 
             d e f a u l t : 
                 b r e a k ; 
         } 
 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
         _ _ H A L _ U N L O C K ( h t i m ) ; 
 
         r e t u r n   H A L _ O K ; 
     } 
     e l s e 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   D M A   B u r s t   t o   t r a n s f e r   D a t a   f r o m   t h e   m e m o r y   t o   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t B a s e A d d r e s s   T I M   B a s e   a d d r e s s   f r o m   w h e r e   t h e   D M A     w i l l   s t a r t   t h e   D a t a   w r i t e 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A B A S E _ C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ S M C R 
     *                         @ a r g   T I M _ D M A B A S E _ D I E R 
     *                         @ a r g   T I M _ D M A B A S E _ S R 
     *                         @ a r g   T I M _ D M A B A S E _ E G R 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C E R 
     *                         @ a r g   T I M _ D M A B A S E _ C N T 
     *                         @ a r g   T I M _ D M A B A S E _ P S C 
     *                         @ a r g   T I M _ D M A B A S E _ A R R 
     *                         @ a r g   T I M _ D M A B A S E _ R C R 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 3 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 4 
     *                         @ a r g   T I M _ D M A B A S E _ B D T R 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A _ U P D A T E :   T I M   u p d a t e   I n t e r r u p t   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 1 :   T I M   C a p t u r e   C o m p a r e   1   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 2 :   T I M   C a p t u r e   C o m p a r e   2   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 3 :   T I M   C a p t u r e   C o m p a r e   3   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 4 :   T I M   C a p t u r e   C o m p a r e   4   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C O M :   T I M   C o m m u t a t i o n   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T I M   T r i g g e r   D M A   s o u r c e 
     *   @ p a r a m     B u r s t B u f f e r   T h e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     B u r s t L e n g t h   D M A   B u r s t   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n :   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R   a n d   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S . 
     *   @ n o t e       T h i s   f u n c t i o n   s h o u l d   b e   u s e d   o n l y   w h e n   B u r s t L e n g t h   i s   e q u a l   t o   D M A   d a t a   t r a n s f e r   l e n g t h . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ W r i t e S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s , 
                                                                                             u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t   * B u r s t B u f f e r ,   u i n t 3 2 _ t     B u r s t L e n g t h ) 
 { 
     r e t u r n   H A L _ T I M _ D M A B u r s t _ M u l t i W r i t e S t a r t ( h t i m ,   B u r s t B a s e A d d r e s s ,   B u r s t R e q u e s t S r c ,   B u r s t B u f f e r ,   B u r s t L e n g t h , 
                                                                                     ( ( B u r s t L e n g t h )   > >   8 U )   +   1 U ) ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   D M A   B u r s t   t o   t r a n s f e r   m u l t i p l e   D a t a   f r o m   t h e   m e m o r y   t o   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t B a s e A d d r e s s   T I M   B a s e   a d d r e s s   f r o m   w h e r e   t h e   D M A   w i l l   s t a r t   t h e   D a t a   w r i t e 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A B A S E _ C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ S M C R 
     *                         @ a r g   T I M _ D M A B A S E _ D I E R 
     *                         @ a r g   T I M _ D M A B A S E _ S R 
     *                         @ a r g   T I M _ D M A B A S E _ E G R 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C E R 
     *                         @ a r g   T I M _ D M A B A S E _ C N T 
     *                         @ a r g   T I M _ D M A B A S E _ P S C 
     *                         @ a r g   T I M _ D M A B A S E _ A R R 
     *                         @ a r g   T I M _ D M A B A S E _ R C R 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 3 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 4 
     *                         @ a r g   T I M _ D M A B A S E _ B D T R 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A _ U P D A T E :   T I M   u p d a t e   I n t e r r u p t   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 1 :   T I M   C a p t u r e   C o m p a r e   1   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 2 :   T I M   C a p t u r e   C o m p a r e   2   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 3 :   T I M   C a p t u r e   C o m p a r e   3   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 4 :   T I M   C a p t u r e   C o m p a r e   4   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C O M :   T I M   C o m m u t a t i o n   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T I M   T r i g g e r   D M A   s o u r c e 
     *   @ p a r a m     B u r s t B u f f e r   T h e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     B u r s t L e n g t h   D M A   B u r s t   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n :   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R   a n d   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S . 
     *   @ p a r a m     D a t a L e n g t h   D a t a   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n   1   a n d   0 x F F F F . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ M u l t i W r i t e S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s , 
                                                                                                       u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t   * B u r s t B u f f e r , 
                                                                                                       u i n t 3 2 _ t     B u r s t L e n g t h ,     u i n t 3 2 _ t     D a t a L e n g t h ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A B U R S T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ B A S E ( B u r s t B a s e A d d r e s s ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ S O U R C E ( B u r s t R e q u e s t S r c ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ L E N G T H ( B u r s t L e n g t h ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ D A T A _ L E N G T H ( D a t a L e n g t h ) ) ; 
 
     i f   ( h t i m - > D M A B u r s t S t a t e   = =   H A L _ D M A _ B U R S T _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( h t i m - > D M A B u r s t S t a t e   = =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( B u r s t B u f f e r   = =   N U L L )   & &   ( B u r s t L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ B U S Y ; 
         } 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
     s w i t c h   ( B u r s t R e q u e s t S r c ) 
     { 
         c a s e   T I M _ D M A _ U P D A T E : 
         { 
             / *   S e t   t h e   D M A   P e r i o d   e l a p s e d   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 1 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 2 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 3 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 4 : 
         { 
             / *   S e t   t h e   D M A   c o m p a r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A D e l a y P u l s e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C O M : 
         { 
             / *   S e t   t h e   D M A   c o m m u t a t i o n   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r C p l t C a l l b a c k   =     T I M E x _ D M A C o m m u t a t i o n C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r H a l f C p l t C a l l b a c k   =     T I M E x _ D M A C o m m u t a t i o n H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ T R I G G E R : 
         { 
             / *   S e t   t h e   D M A   t r i g g e r   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A T r i g g e r C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A T r i g g e r H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   C o n f i g u r e   t h e   D M A   B u r s t   M o d e   * / 
     h t i m - > I n s t a n c e - > D C R   =   ( B u r s t B a s e A d d r e s s   |   B u r s t L e n g t h ) ; 
     / *   E n a b l e   t h e   T I M   D M A   R e q u e s t   * / 
     _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   B u r s t R e q u e s t S r c ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p s   t h e   T I M   D M A   B u r s t   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s   t o   d i s a b l e 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ W r i t e S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t R e q u e s t S r c ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ S O U R C E ( B u r s t R e q u e s t S r c ) ) ; 
 
     / *   A b o r t   t h e   D M A   t r a n s f e r   ( a t   l e a s t   d i s a b l e   t h e   D M A   c h a n n e l )   * / 
     s w i t c h   ( B u r s t R e q u e s t S r c ) 
     { 
         c a s e   T I M _ D M A _ U P D A T E : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 1 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 2 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 3 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 4 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C O M : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ T R I G G E R : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] ) ; 
             b r e a k ; 
         } 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   T I M   U p d a t e   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   B u r s t R e q u e s t S r c ) ; 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   D M A   B u r s t   t o   t r a n s f e r   D a t a   f r o m   t h e   T I M   p e r i p h e r a l   t o   t h e   m e m o r y 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t B a s e A d d r e s s   T I M   B a s e   a d d r e s s   f r o m   w h e r e   t h e   D M A     w i l l   s t a r t   t h e   D a t a   r e a d 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A B A S E _ C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ S M C R 
     *                         @ a r g   T I M _ D M A B A S E _ D I E R 
     *                         @ a r g   T I M _ D M A B A S E _ S R 
     *                         @ a r g   T I M _ D M A B A S E _ E G R 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C E R 
     *                         @ a r g   T I M _ D M A B A S E _ C N T 
     *                         @ a r g   T I M _ D M A B A S E _ P S C 
     *                         @ a r g   T I M _ D M A B A S E _ A R R 
     *                         @ a r g   T I M _ D M A B A S E _ R C R 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 3 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 4 
     *                         @ a r g   T I M _ D M A B A S E _ B D T R 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A _ U P D A T E :   T I M   u p d a t e   I n t e r r u p t   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 1 :   T I M   C a p t u r e   C o m p a r e   1   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 2 :   T I M   C a p t u r e   C o m p a r e   2   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 3 :   T I M   C a p t u r e   C o m p a r e   3   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 4 :   T I M   C a p t u r e   C o m p a r e   4   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C O M :   T I M   C o m m u t a t i o n   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T I M   T r i g g e r   D M A   s o u r c e 
     *   @ p a r a m     B u r s t B u f f e r   T h e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     B u r s t L e n g t h   D M A   B u r s t   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n :   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R   a n d   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S . 
     *   @ n o t e       T h i s   f u n c t i o n   s h o u l d   b e   u s e d   o n l y   w h e n   B u r s t L e n g t h   i s   e q u a l   t o   D M A   d a t a   t r a n s f e r   l e n g t h . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ R e a d S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s , 
                                                                                           u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t     * B u r s t B u f f e r ,   u i n t 3 2 _ t     B u r s t L e n g t h ) 
 { 
     r e t u r n   H A L _ T I M _ D M A B u r s t _ M u l t i R e a d S t a r t ( h t i m ,   B u r s t B a s e A d d r e s s ,   B u r s t R e q u e s t S r c ,   B u r s t B u f f e r ,   B u r s t L e n g t h , 
                                                                                   ( ( B u r s t L e n g t h )   > >   8 U )   +   1 U ) ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   D M A   B u r s t   t o   t r a n s f e r   D a t a   f r o m   t h e   T I M   p e r i p h e r a l   t o   t h e   m e m o r y 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t B a s e A d d r e s s   T I M   B a s e   a d d r e s s   f r o m   w h e r e   t h e   D M A     w i l l   s t a r t   t h e   D a t a   r e a d 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A B A S E _ C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ S M C R 
     *                         @ a r g   T I M _ D M A B A S E _ D I E R 
     *                         @ a r g   T I M _ D M A B A S E _ S R 
     *                         @ a r g   T I M _ D M A B A S E _ E G R 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C M R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C E R 
     *                         @ a r g   T I M _ D M A B A S E _ C N T 
     *                         @ a r g   T I M _ D M A B A S E _ P S C 
     *                         @ a r g   T I M _ D M A B A S E _ A R R 
     *                         @ a r g   T I M _ D M A B A S E _ R C R 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 1 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 2 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 3 
     *                         @ a r g   T I M _ D M A B A S E _ C C R 4 
     *                         @ a r g   T I M _ D M A B A S E _ B D T R 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s 
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ D M A _ U P D A T E :   T I M   u p d a t e   I n t e r r u p t   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 1 :   T I M   C a p t u r e   C o m p a r e   1   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 2 :   T I M   C a p t u r e   C o m p a r e   2   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 3 :   T I M   C a p t u r e   C o m p a r e   3   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C C 4 :   T I M   C a p t u r e   C o m p a r e   4   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ C O M :   T I M   C o m m u t a t i o n   D M A   s o u r c e 
     *                         @ a r g   T I M _ D M A _ T R I G G E R :   T I M   T r i g g e r   D M A   s o u r c e 
     *   @ p a r a m     B u r s t B u f f e r   T h e   B u f f e r   a d d r e s s . 
     *   @ p a r a m     B u r s t L e n g t h   D M A   B u r s t   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n :   T I M _ D M A B U R S T L E N G T H _ 1 T R A N S F E R   a n d   T I M _ D M A B U R S T L E N G T H _ 1 8 T R A N S F E R S . 
     *   @ p a r a m     D a t a L e n g t h   D a t a   l e n g t h .   T h i s   p a r a m e t e r   c a n   b e   o n e   v a l u e 
     *                   b e t w e e n   1   a n d   0 x F F F F . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ M u l t i R e a d S t a r t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t B a s e A d d r e s s , 
                                                                                                     u i n t 3 2 _ t   B u r s t R e q u e s t S r c ,   u i n t 3 2 _ t     * B u r s t B u f f e r , 
                                                                                                     u i n t 3 2 _ t     B u r s t L e n g t h ,   u i n t 3 2 _ t     D a t a L e n g t h ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A B U R S T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ B A S E ( B u r s t B a s e A d d r e s s ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ S O U R C E ( B u r s t R e q u e s t S r c ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ L E N G T H ( B u r s t L e n g t h ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ D A T A _ L E N G T H ( D a t a L e n g t h ) ) ; 
 
     i f   ( h t i m - > D M A B u r s t S t a t e   = =   H A L _ D M A _ B U R S T _ S T A T E _ B U S Y ) 
     { 
         r e t u r n   H A L _ B U S Y ; 
     } 
     e l s e   i f   ( h t i m - > D M A B u r s t S t a t e   = =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ) 
     { 
         i f   ( ( B u r s t B u f f e r   = =   N U L L )   & &   ( B u r s t L e n g t h   >   0 U ) ) 
         { 
             r e t u r n   H A L _ E R R O R ; 
         } 
         e l s e 
         { 
             h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ B U S Y ; 
         } 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
     s w i t c h   ( B u r s t R e q u e s t S r c ) 
     { 
         c a s e   T I M _ D M A _ U P D A T E : 
         { 
             / *   S e t   t h e   D M A   P e r i o d   e l a p s e d   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A P e r i o d E l a p s e d H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 1 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 2 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 3 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 4 : 
         { 
             / *   S e t   t h e   D M A   c a p t u r e   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A C a p t u r e H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C O M : 
         { 
             / *   S e t   t h e   D M A   c o m m u t a t i o n   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r C p l t C a l l b a c k   =     T I M E x _ D M A C o m m u t a t i o n C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r H a l f C p l t C a l l b a c k   =     T I M E x _ D M A C o m m u t a t i o n H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ T R I G G E R : 
         { 
             / *   S e t   t h e   D M A   t r i g g e r   c a l l b a c k s   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r C p l t C a l l b a c k   =   T I M _ D M A T r i g g e r C p l t ; 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r H a l f C p l t C a l l b a c k   =   T I M _ D M A T r i g g e r H a l f C p l t ; 
 
             / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * / 
             h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > X f e r E r r o r C a l l b a c k   =   T I M _ D M A E r r o r   ; 
 
             / *   E n a b l e   t h e   D M A   c h a n n e l   * / 
             i f   ( H A L _ D M A _ S t a r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] ,   ( u i n t 3 2 _ t ) & h t i m - > I n s t a n c e - > D M A R ,   ( u i n t 3 2 _ t ) B u r s t B u f f e r , 
                                                   D a t a L e n g t h )   ! =   H A L _ O K ) 
             { 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 r e t u r n   H A L _ E R R O R ; 
             } 
             b r e a k ; 
         } 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   C o n f i g u r e   t h e   D M A   B u r s t   M o d e   * / 
     h t i m - > I n s t a n c e - > D C R   =   ( B u r s t B a s e A d d r e s s   |   B u r s t L e n g t h ) ; 
 
     / *   E n a b l e   t h e   T I M   D M A   R e q u e s t   * / 
     _ _ H A L _ T I M _ E N A B L E _ D M A ( h t i m ,   B u r s t R e q u e s t S r c ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S t o p   t h e   D M A   b u r s t   r e a d i n g 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     B u r s t R e q u e s t S r c   T I M   D M A   R e q u e s t   s o u r c e s   t o   d i s a b l e . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ D M A B u r s t _ R e a d S t o p ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   B u r s t R e q u e s t S r c ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A _ S O U R C E ( B u r s t R e q u e s t S r c ) ) ; 
 
     / *   A b o r t   t h e   D M A   t r a n s f e r   ( a t   l e a s t   d i s a b l e   t h e   D M A   c h a n n e l )   * / 
     s w i t c h   ( B u r s t R e q u e s t S r c ) 
     { 
         c a s e   T I M _ D M A _ U P D A T E : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 1 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 2 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 3 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C C 4 : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ C O M : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ C O M M U T A T I O N ] ) ; 
             b r e a k ; 
         } 
         c a s e   T I M _ D M A _ T R I G G E R : 
         { 
             ( v o i d ) H A L _ D M A _ A b o r t _ I T ( h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] ) ; 
             b r e a k ; 
         } 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     / *   D i s a b l e   t h e   T I M   U p d a t e   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   B u r s t R e q u e s t S r c ) ; 
 
     / *   C h a n g e   t h e   D M A   b u r s t   o p e r a t i o n   s t a t e   * / 
     h t i m - > D M A B u r s t S t a t e   =   H A L _ D M A _ B U R S T _ S T A T E _ R E A D Y ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     G e n e r a t e   a   s o f t w a r e   e v e n t 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     E v e n t S o u r c e   s p e c i f i e s   t h e   e v e n t   s o u r c e . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ U P D A T E :   T i m e r   u p d a t e   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ C C 1 :   T i m e r   C a p t u r e   C o m p a r e   1   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ C C 2 :   T i m e r   C a p t u r e   C o m p a r e   2   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ C C 3 :   T i m e r   C a p t u r e   C o m p a r e   3   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ C C 4 :   T i m e r   C a p t u r e   C o m p a r e   4   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ C O M :   T i m e r   C O M   e v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ T R I G G E R :   T i m e r   T r i g g e r   E v e n t   s o u r c e 
     *                         @ a r g   T I M _ E V E N T S O U R C E _ B R E A K :   T i m e r   B r e a k   e v e n t   s o u r c e 
     *   @ n o t e       B a s i c   t i m e r s   c a n   o n l y   g e n e r a t e   a n   u p d a t e   e v e n t . 
     *   @ n o t e       T I M _ E V E N T S O U R C E _ C O M   i s   r e l e v a n t   o n l y   w i t h   a d v a n c e d   t i m e r   i n s t a n c e s . 
     *   @ n o t e       T I M _ E V E N T S O U R C E _ B R E A K   a r e   r e l e v a n t   o n l y   f o r   t i m e r   i n s t a n c e s 
     *                   s u p p o r t i n g   a   b r e a k   i n p u t . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ G e n e r a t e E v e n t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   E v e n t S o u r c e ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ E V E N T _ S O U R C E ( E v e n t S o u r c e ) ) ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     / *   C h a n g e   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   S e t   t h e   e v e n t   s o u r c e s   * / 
     h t i m - > I n s t a n c e - > E G R   =   E v e n t S o u r c e ; 
 
     / *   C h a n g e   t h e   T I M   s t a t e   * / 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     / *   R e t u r n   f u n c t i o n   s t a t u s   * / 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   O C R e f   c l e a r   f e a t u r e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     s C l e a r I n p u t C o n f i g   p o i n t e r   t o   a   T I M _ C l e a r I n p u t C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   O C R E F   c l e a r   f e a t u r e   a n d   p a r a m e t e r s   f o r   t h e   T I M   p e r i p h e r a l . 
     *   @ p a r a m     C h a n n e l   s p e c i f i e s   t h e   T I M   C h a n n e l 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g O C r e f C l e a r ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                       T I M _ C l e a r I n p u t C o n f i g T y p e D e f   * s C l e a r I n p u t C o n f i g , 
                                                                                       u i n t 3 2 _ t   C h a n n e l ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ O C X R E F _ C L E A R _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C L E A R I N P U T _ S O U R C E ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S o u r c e ) ) ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     s w i t c h   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S o u r c e ) 
     { 
         c a s e   T I M _ C L E A R I N P U T S O U R C E _ N O N E : 
         { 
             / *   C l e a r   t h e   O C R E F   c l e a r   s e l e c t i o n   b i t   a n d   t h e   t h e   E T R   B i t s   * / 
             C L E A R _ B I T ( h t i m - > I n s t a n c e - > S M C R ,   ( T I M _ S M C R _ E T F   |   T I M _ S M C R _ E T P S   |   T I M _ S M C R _ E C E   |   T I M _ S M C R _ E T P ) ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L E A R I N P U T S O U R C E _ E T R : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L E A R I N P U T _ P O L A R I T Y ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L E A R I N P U T _ P R E S C A L E R ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t P r e s c a l e r ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L E A R I N P U T _ F I L T E R ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t F i l t e r ) ) ; 
 
             / *   W h e n   O C R e f   c l e a r   f e a t u r e   i s   u s e d   w i t h   E T R   s o u r c e ,   E T R   p r e s c a l e r   m u s t   b e   o f f   * / 
             i f   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t P r e s c a l e r   ! =   T I M _ C L E A R I N P U T P R E S C A L E R _ D I V 1 ) 
             { 
                 h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
                 _ _ H A L _ U N L O C K ( h t i m ) ; 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             T I M _ E T R _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                                 s C l e a r I n p u t C o n f i g - > C l e a r I n p u t P r e s c a l e r , 
                                                 s C l e a r I n p u t C o n f i g - > C l e a r I n p u t P o l a r i t y , 
                                                 s C l e a r I n p u t C o n f i g - > C l e a r I n p u t F i l t e r ) ; 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             i f   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S t a t e   ! =   ( u i n t 3 2 _ t ) D I S A B L E ) 
             { 
                 / *   E n a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   1   * / 
                 S E T _ B I T ( h t i m - > I n s t a n c e - > C C M R 1 ,   T I M _ C C M R 1 _ O C 1 C E ) ; 
             } 
             e l s e 
             { 
                 / *   D i s a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   1   * / 
                 C L E A R _ B I T ( h t i m - > I n s t a n c e - > C C M R 1 ,   T I M _ C C M R 1 _ O C 1 C E ) ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             i f   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S t a t e   ! =   ( u i n t 3 2 _ t ) D I S A B L E ) 
             { 
                 / *   E n a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   2   * / 
                 S E T _ B I T ( h t i m - > I n s t a n c e - > C C M R 1 ,   T I M _ C C M R 1 _ O C 2 C E ) ; 
             } 
             e l s e 
             { 
                 / *   D i s a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   2   * / 
                 C L E A R _ B I T ( h t i m - > I n s t a n c e - > C C M R 1 ,   T I M _ C C M R 1 _ O C 2 C E ) ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             i f   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S t a t e   ! =   ( u i n t 3 2 _ t ) D I S A B L E ) 
             { 
                 / *   E n a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   3   * / 
                 S E T _ B I T ( h t i m - > I n s t a n c e - > C C M R 2 ,   T I M _ C C M R 2 _ O C 3 C E ) ; 
             } 
             e l s e 
             { 
                 / *   D i s a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   3   * / 
                 C L E A R _ B I T ( h t i m - > I n s t a n c e - > C C M R 2 ,   T I M _ C C M R 2 _ O C 3 C E ) ; 
             } 
             b r e a k ; 
         } 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             i f   ( s C l e a r I n p u t C o n f i g - > C l e a r I n p u t S t a t e   ! =   ( u i n t 3 2 _ t ) D I S A B L E ) 
             { 
                 / *   E n a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   4   * / 
                 S E T _ B I T ( h t i m - > I n s t a n c e - > C C M R 2 ,   T I M _ C C M R 2 _ O C 4 C E ) ; 
             } 
             e l s e 
             { 
                 / *   D i s a b l e   t h e   O C R E F   c l e a r   f e a t u r e   f o r   C h a n n e l   4   * / 
                 C L E A R _ B I T ( h t i m - > I n s t a n c e - > C C M R 2 ,   T I M _ C C M R 2 _ O C 4 C E ) ; 
             } 
             b r e a k ; 
         } 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f       C o n f i g u r e s   t h e   c l o c k   s o u r c e   t o   b e   u s e d 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     s C l o c k S o u r c e C o n f i g   p o i n t e r   t o   a   T I M _ C l o c k C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   c l o c k   s o u r c e   i n f o r m a t i o n   f o r   t h e   T I M   p e r i p h e r a l . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g C l o c k S o u r c e ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ C l o c k C o n f i g T y p e D e f   * s C l o c k S o u r c e C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   P r o c e s s   L o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E ( s C l o c k S o u r c e C o n f i g - > C l o c k S o u r c e ) ) ; 
 
     / *   R e s e t   t h e   S M S ,   T S ,   E C E ,   E T P S   a n d   E T R F   b i t s   * / 
     t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R ; 
     t m p s m c r   & =   ~ ( T I M _ S M C R _ S M S   |   T I M _ S M C R _ T S ) ; 
     t m p s m c r   & =   ~ ( T I M _ S M C R _ E T F   |   T I M _ S M C R _ E T P S   |   T I M _ S M C R _ E C E   |   T I M _ S M C R _ E T P ) ; 
     h t i m - > I n s t a n c e - > S M C R   =   t m p s m c r ; 
 
     s w i t c h   ( s C l o c k S o u r c e C o n f i g - > C l o c k S o u r c e ) 
     { 
         c a s e   T I M _ C L O C K S O U R C E _ I N T E R N A L : 
         { 
             a s s e r t _ p a r a m ( I S _ T I M _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ E T R M O D E 1 : 
         { 
             / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   e x t e r n a l   t r i g g e r   i n p u t   m o d e   1   ( E T R F ) * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ E T R M O D E 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C h e c k   E T R   i n p u t   c o n d i t i o n i n g   r e l a t e d   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P R E S C A L E R ( s C l o c k S o u r c e C o n f i g - > C l o c k P r e s c a l e r ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P O L A R I T Y ( s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K F I L T E R ( s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ) ; 
 
             / *   C o n f i g u r e   t h e   E T R   C l o c k   s o u r c e   * / 
             T I M _ E T R _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k P r e s c a l e r , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ; 
 
             / *   S e l e c t   t h e   E x t e r n a l   c l o c k   m o d e 1   a n d   t h e   E T R F   t r i g g e r   * / 
             t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R ; 
             t m p s m c r   | =   ( T I M _ S L A V E M O D E _ E X T E R N A L 1   |   T I M _ C L O C K S O U R C E _ E T R M O D E 1 ) ; 
             / *   W r i t e   t o   T I M x   S M C R   * / 
             h t i m - > I n s t a n c e - > S M C R   =   t m p s m c r ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ E T R M O D E 2 : 
         { 
             / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   e x t e r n a l   t r i g g e r   i n p u t   m o d e   2   ( E T R F ) * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ E T R M O D E 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C h e c k   E T R   i n p u t   c o n d i t i o n i n g   r e l a t e d   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P R E S C A L E R ( s C l o c k S o u r c e C o n f i g - > C l o c k P r e s c a l e r ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P O L A R I T Y ( s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K F I L T E R ( s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ) ; 
 
             / *   C o n f i g u r e   t h e   E T R   C l o c k   s o u r c e   * / 
             T I M _ E T R _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k P r e s c a l e r , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y , 
                                                 s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ; 
             / *   E n a b l e   t h e   E x t e r n a l   c l o c k   m o d e 2   * / 
             h t i m - > I n s t a n c e - > S M C R   | =   T I M _ S M C R _ E C E ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ T I 1 : 
         { 
             / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   e x t e r n a l   c l o c k   m o d e   1   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ T I X _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C h e c k   T I 1   i n p u t   c o n d i t i o n i n g   r e l a t e d   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P O L A R I T Y ( s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K F I L T E R ( s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ) ; 
 
             T I M _ T I 1 _ C o n f i g I n p u t S t a g e ( h t i m - > I n s t a n c e , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ; 
             T I M _ I T R x _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   T I M _ C L O C K S O U R C E _ T I 1 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ T I 2 : 
         { 
             / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   e x t e r n a l   c l o c k   m o d e   1   ( E T R F ) * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ T I X _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C h e c k   T I 2   i n p u t   c o n d i t i o n i n g   r e l a t e d   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P O L A R I T Y ( s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K F I L T E R ( s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ) ; 
 
             T I M _ T I 2 _ C o n f i g I n p u t S t a g e ( h t i m - > I n s t a n c e , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ; 
             T I M _ I T R x _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   T I M _ C L O C K S O U R C E _ T I 2 ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ T I 1 E D : 
         { 
             / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   e x t e r n a l   c l o c k   m o d e   1   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ T I X _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   C h e c k   T I 1   i n p u t   c o n d i t i o n i n g   r e l a t e d   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K P O L A R I T Y ( s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K F I L T E R ( s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ) ; 
 
             T I M _ T I 1 _ C o n f i g I n p u t S t a g e ( h t i m - > I n s t a n c e , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k P o l a r i t y , 
                                                               s C l o c k S o u r c e C o n f i g - > C l o c k F i l t e r ) ; 
             T I M _ I T R x _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   T I M _ C L O C K S O U R C E _ T I 1 E D ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C L O C K S O U R C E _ I T R 0 : 
         c a s e   T I M _ C L O C K S O U R C E _ I T R 1 : 
         c a s e   T I M _ C L O C K S O U R C E _ I T R 2 : 
         c a s e   T I M _ C L O C K S O U R C E _ I T R 3 : 
             { 
                 / *   C h e c k   w h e t h e r   o r   n o t   t h e   t i m e r   i n s t a n c e   s u p p o r t s   i n t e r n a l   t r i g g e r   i n p u t   * / 
                 a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ I T R X _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
                 T I M _ I T R x _ S e t C o n f i g ( h t i m - > I n s t a n c e ,   s C l o c k S o u r c e C o n f i g - > C l o c k S o u r c e ) ; 
                 b r e a k ; 
             } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     S e l e c t s   t h e   s i g n a l   c o n n e c t e d   t o   t h e   T I 1   i n p u t :   d i r e c t   f r o m   C H 1 _ i n p u t 
     *                   o r   a   X O R   c o m b i n a t i o n   b e t w e e n   C H 1 _ i n p u t ,   C H 2 _ i n p u t   &   C H 3 _ i n p u t 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     T I 1 _ S e l e c t i o n   I n d i c a t e   w h e t h e r   o r   n o t   c h a n n e l   1   i s   c o n n e c t e d   t o   t h e 
     *                   o u t p u t   o f   a   X O R   g a t e . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ T I 1 S E L E C T I O N _ C H 1 :   T h e   T I M x _ C H 1   p i n   i s   c o n n e c t e d   t o   T I 1   i n p u t 
     *                         @ a r g   T I M _ T I 1 S E L E C T I O N _ X O R C O M B I N A T I O N :   T h e   T I M x _ C H 1 ,   C H 2   a n d   C H 3 
     *                         p i n s   a r e   c o n n e c t e d   t o   t h e   T I 1   i n p u t   ( X O R   c o m b i n a t i o n ) 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ C o n f i g T I 1 I n p u t ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   T I 1 _ S e l e c t i o n ) 
 { 
     u i n t 3 2 _ t   t m p c r 2 ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ X O R _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ T I 1 S E L E C T I O N ( T I 1 _ S e l e c t i o n ) ) ; 
 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =   h t i m - > I n s t a n c e - > C R 2 ; 
 
     / *   R e s e t   t h e   T I 1   s e l e c t i o n   * / 
     t m p c r 2   & =   ~ T I M _ C R 2 _ T I 1 S ; 
 
     / *   S e t   t h e   T I 1   s e l e c t i o n   * / 
     t m p c r 2   | =   T I 1 _ S e l e c t i o n ; 
 
     / *   W r i t e   t o   T I M x C R 2   * / 
     h t i m - > I n s t a n c e - > C R 2   =   t m p c r 2 ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   T I M   i n   S l a v e   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     s S l a v e C o n f i g   p o i n t e r   t o   a   T I M _ S l a v e C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   s e l e c t e d   t r i g g e r   ( i n t e r n a l   t r i g g e r   i n p u t ,   f i l t e r e d 
     *                   t i m e r   i n p u t   o r   e x t e r n a l   t r i g g e r   i n p u t )   a n d   t h e   S l a v e   m o d e 
     *                   ( D i s a b l e ,   R e s e t ,   G a t e d ,   T r i g g e r ,   E x t e r n a l   c l o c k   m o d e   1 ) . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ S l a v e C o n f i g S y n c h r o ( T I M _ H a n d l e T y p e D e f   * h t i m ,   T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ S L A V E _ M O D E ( s S l a v e C o n f i g - > S l a v e M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R _ S E L E C T I O N ( s S l a v e C o n f i g - > I n p u t T r i g g e r ) ) ; 
 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     i f   ( T I M _ S l a v e T i m e r _ S e t C o n f i g ( h t i m ,   s S l a v e C o n f i g )   ! =   H A L _ O K ) 
     { 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
         _ _ H A L _ U N L O C K ( h t i m ) ; 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   D i s a b l e   T r i g g e r   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ I T ( h t i m ,   T I M _ I T _ T R I G G E R ) ; 
 
     / *   D i s a b l e   T r i g g e r   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ T R I G G E R ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   T I M   i n   S l a v e   m o d e   i n   i n t e r r u p t   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     s S l a v e C o n f i g   p o i n t e r   t o   a   T I M _ S l a v e C o n f i g T y p e D e f   s t r u c t u r e   t h a t 
     *                   c o n t a i n s   t h e   s e l e c t e d   t r i g g e r   ( i n t e r n a l   t r i g g e r   i n p u t ,   f i l t e r e d 
     *                   t i m e r   i n p u t   o r   e x t e r n a l   t r i g g e r   i n p u t )   a n d   t h e   S l a v e   m o d e 
     *                   ( D i s a b l e ,   R e s e t ,   G a t e d ,   T r i g g e r ,   E x t e r n a l   c l o c k   m o d e   1 ) . 
     *   @ r e t v a l   H A L   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ S l a v e C o n f i g S y n c h r o _ I T ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                 T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ S L A V E _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ S L A V E _ M O D E ( s S l a v e C o n f i g - > S l a v e M o d e ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R _ S E L E C T I O N ( s S l a v e C o n f i g - > I n p u t T r i g g e r ) ) ; 
 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ B U S Y ; 
 
     i f   ( T I M _ S l a v e T i m e r _ S e t C o n f i g ( h t i m ,   s S l a v e C o n f i g )   ! =   H A L _ O K ) 
     { 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
         _ _ H A L _ U N L O C K ( h t i m ) ; 
         r e t u r n   H A L _ E R R O R ; 
     } 
 
     / *   E n a b l e   T r i g g e r   I n t e r r u p t   * / 
     _ _ H A L _ T I M _ E N A B L E _ I T ( h t i m ,   T I M _ I T _ T R I G G E R ) ; 
 
     / *   D i s a b l e   T r i g g e r   D M A   r e q u e s t   * / 
     _ _ H A L _ T I M _ D I S A B L E _ D M A ( h t i m ,   T I M _ D M A _ T R I G G E R ) ; 
 
     h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     R e a d   t h e   c a p t u r e d   v a l u e   f r o m   C a p t u r e   C o m p a r e   u n i t 
     *   @ p a r a m     h t i m   T I M   h a n d l e . 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l s   t o   b e   e n a b l e d 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3   s e l e c t e d 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4   s e l e c t e d 
     *   @ r e t v a l   C a p t u r e d   v a l u e 
     * / 
 u i n t 3 2 _ t   H A L _ T I M _ R e a d C a p t u r e d V a l u e ( T I M _ H a n d l e T y p e D e f   * h t i m ,   u i n t 3 2 _ t   C h a n n e l ) 
 { 
     u i n t 3 2 _ t   t m p r e g   =   0 U ; 
 
     s w i t c h   ( C h a n n e l ) 
     { 
         c a s e   T I M _ C H A N N E L _ 1 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   R e t u r n   t h e   c a p t u r e   1   v a l u e   * / 
             t m p r e g   =     h t i m - > I n s t a n c e - > C C R 1 ; 
 
             b r e a k ; 
         } 
         c a s e   T I M _ C H A N N E L _ 2 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   R e t u r n   t h e   c a p t u r e   2   v a l u e   * / 
             t m p r e g   =       h t i m - > I n s t a n c e - > C C R 2 ; 
 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 3 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 3 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   R e t u r n   t h e   c a p t u r e   3   v a l u e   * / 
             t m p r e g   =       h t i m - > I n s t a n c e - > C C R 3 ; 
 
             b r e a k ; 
         } 
 
         c a s e   T I M _ C H A N N E L _ 4 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 4 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
             / *   R e t u r n   t h e   c a p t u r e   4   v a l u e   * / 
             t m p r e g   =       h t i m - > I n s t a n c e - > C C R 4 ; 
 
             b r e a k ; 
         } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
 
     r e t u r n   t m p r e g ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 9   T I M   C a l l b a c k s   f u n c t i o n s 
     *     @ b r i e f         T I M   C a l l b a c k s   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                 # # # # #   T I M   C a l l b a c k s   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
   [ . . ] 
       T h i s   s e c t i o n   p r o v i d e s   T I M   c a l l b a c k   f u n c t i o n s : 
       ( + )   T I M   P e r i o d   e l a p s e d   c a l l b a c k 
       ( + )   T I M   O u t p u t   C o m p a r e   c a l l b a c k 
       ( + )   T I M   I n p u t   c a p t u r e   c a l l b a c k 
       ( + )   T I M   T r i g g e r   c a l l b a c k 
       ( + )   T I M   E r r o r   c a l l b a c k 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     P e r i o d   e l a p s e d   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     P e r i o d   e l a p s e d   h a l f   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     O u t p u t   C o m p a r e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   O C   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     I n p u t   C a p t u r e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   I C   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ I C _ C a p t u r e C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     I n p u t   C a p t u r e   h a l f   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   I C   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     P W M   P u l s e   f i n i s h e d   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     P W M   P u l s e   f i n i s h e d   h a l f   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     H a l l   T r i g g e r   d e t e c t i o n   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ T r i g g e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ T r i g g e r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     H a l l   T r i g g e r   d e t e c t i o n   h a l f   c o m p l e t e   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 / * * 
     *   @ b r i e f     T i m e r   e r r o r   c a l l b a c k   i n   n o n - b l o c k i n g   m o d e 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   N o n e 
     * / 
 _ _ w e a k   v o i d   H A L _ T I M _ E r r o r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * / 
     U N U S E D ( h t i m ) ; 
 
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d , 
                         t h e   H A L _ T I M _ E r r o r C a l l b a c k   c o u l d   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e 
       * / 
 } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
 / * * 
     *   @ b r i e f     R e g i s t e r   a   U s e r   T I M   c a l l b a c k   t o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k 
     *   @ p a r a m   h t i m   t i m   h a n d l e 
     *   @ p a r a m   C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d 
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                     @ a r g   @ r e f   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   B a s e   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   B a s e   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   I C   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   I C   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   O C   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   O C   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   P W M   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   P W M   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   O n e   P u l s e   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   O n e   P u l s e   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   E n c o d e r   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   E n c o d e r   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   H a l l   S e n s o r   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   H a l l   S e n s o r   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P E R I O D _ E L A P S E D _ C B _ I D   P e r i o d   E l a p s e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P E R I O D _ E L A P S E D _ H A L F _ C B _ I D   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ T R I G G E R _ C B _ I D   T r i g g e r   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ T R I G G E R _ H A L F _ C B _ I D   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ C A P T U R E _ C B _ I D   I n p u t   C a p t u r e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ C A P T U R E _ H A L F _ C B _ I D   I n p u t   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ D E L A Y _ E L A P S E D _ C B _ I D   O u t p u t   C o m p a r e   D e l a y   E l a p s e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ C B _ I D   P W M   P u l s e   F i n i s h e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ H A L F _ C B _ I D   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ C O M M U T A T I O N _ C B _ I D   C o m m u t a t i o n   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ C O M M U T A T I O N _ H A L F _ C B _ I D   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ B R E A K _ C B _ I D   B r e a k   C a l l b a c k   I D 
     *                     @ p a r a m   p C a l l b a c k   p o i n t e r   t o   t h e   c a l l b a c k   f u n c t i o n 
     *                     @ r e t v a l   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ R e g i s t e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ,   H A L _ T I M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D , 
                                                                                       p T I M _ C a l l b a c k T y p e D e f   p C a l l b a c k ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
 
     i f   ( p C a l l b a c k   = =   N U L L ) 
     { 
         r e t u r n   H A L _ E R R O R ; 
     } 
     / *   P r o c e s s   l o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E A D Y ) 
     { 
         s w i t c h   ( C a l l b a c k I D ) 
         { 
             c a s e   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   : 
                 h t i m - > B a s e _ M s p I n i t C a l l b a c k                                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > B a s e _ M s p D e I n i t C a l l b a c k                               =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   : 
                 h t i m - > I C _ M s p I n i t C a l l b a c k                                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > I C _ M s p D e I n i t C a l l b a c k                                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   : 
                 h t i m - > O C _ M s p I n i t C a l l b a c k                                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > O C _ M s p D e I n i t C a l l b a c k                                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   : 
                 h t i m - > P W M _ M s p I n i t C a l l b a c k                                     =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > P W M _ M s p D e I n i t C a l l b a c k                                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   : 
                 h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k                           =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   : 
                 h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k                             =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k                         =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   : 
                 h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P E R I O D _ E L A P S E D _ C B _ I D   : 
                 h t i m - > P e r i o d E l a p s e d C a l l b a c k                                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P E R I O D _ E L A P S E D _ H A L F _ C B _ I D   : 
                 h t i m - > P e r i o d E l a p s e d H a l f C p l t C a l l b a c k                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ T R I G G E R _ C B _ I D   : 
                 h t i m - > T r i g g e r C a l l b a c k                                             =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ T R I G G E R _ H A L F _ C B _ I D   : 
                 h t i m - > T r i g g e r H a l f C p l t C a l l b a c k                             =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ C A P T U R E _ C B _ I D   : 
                 h t i m - > I C _ C a p t u r e C a l l b a c k                                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ C A P T U R E _ H A L F _ C B _ I D   : 
                 h t i m - > I C _ C a p t u r e H a l f C p l t C a l l b a c k                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ D E L A Y _ E L A P S E D _ C B _ I D   : 
                 h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k                             =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ C B _ I D   : 
                 h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k                         =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ H A L F _ C B _ I D   : 
                 h t i m - > P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k         =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E R R O R _ C B _ I D   : 
                 h t i m - > E r r o r C a l l b a c k                                                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ C O M M U T A T I O N _ C B _ I D   : 
                 h t i m - > C o m m u t a t i o n C a l l b a c k                                     =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ C O M M U T A T I O N _ H A L F _ C B _ I D   : 
                 h t i m - > C o m m u t a t i o n H a l f C p l t C a l l b a c k                     =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B R E A K _ C B _ I D   : 
                 h t i m - > B r e a k C a l l b a c k                                                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             d e f a u l t   : 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 s t a t u s   =     H A L _ E R R O R ; 
                 b r e a k ; 
         } 
     } 
     e l s e   i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         s w i t c h   ( C a l l b a c k I D ) 
         { 
             c a s e   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   : 
                 h t i m - > B a s e _ M s p I n i t C a l l b a c k                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > B a s e _ M s p D e I n i t C a l l b a c k               =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   : 
                 h t i m - > I C _ M s p I n i t C a l l b a c k                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > I C _ M s p D e I n i t C a l l b a c k                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   : 
                 h t i m - > O C _ M s p I n i t C a l l b a c k                       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > O C _ M s p D e I n i t C a l l b a c k                   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   : 
                 h t i m - > P W M _ M s p I n i t C a l l b a c k                     =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > P W M _ M s p D e I n i t C a l l b a c k                 =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   : 
                 h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k           =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   : 
                 h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k             =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k         =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   : 
                 h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k       =   p C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   : 
                 h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ; 
                 b r e a k ; 
 
             d e f a u l t   : 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 s t a t u s   =     H A L _ E R R O R ; 
                 b r e a k ; 
         } 
     } 
     e l s e 
     { 
         / *   R e t u r n   e r r o r   s t a t u s   * / 
         s t a t u s   =     H A L _ E R R O R ; 
     } 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   s t a t u s ; 
 } 
 
 / * * 
     *   @ b r i e f     U n r e g i s t e r   a   T I M   c a l l b a c k 
     *                   T I M   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k 
     *   @ p a r a m   h t i m   t i m   h a n d l e 
     *   @ p a r a m   C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d 
     *                 T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                     @ a r g   @ r e f   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   B a s e   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   B a s e   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   I C   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   I C   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   O C   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   O C   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   P W M   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   P W M   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   O n e   P u l s e   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   O n e   P u l s e   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   E n c o d e r   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   E n c o d e r   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   H a l l   S e n s o r   M s p I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   H a l l   S e n s o r   M s p D e I n i t   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P E R I O D _ E L A P S E D _ C B _ I D   P e r i o d   E l a p s e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P E R I O D _ E L A P S E D _ H A L F _ C B _ I D   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ T R I G G E R _ C B _ I D   T r i g g e r   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ T R I G G E R _ H A L F _ C B _ I D   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ C A P T U R E _ C B _ I D   I n p u t   C a p t u r e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ I C _ C A P T U R E _ H A L F _ C B _ I D   I n p u t   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ O C _ D E L A Y _ E L A P S E D _ C B _ I D   O u t p u t   C o m p a r e   D e l a y   E l a p s e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ C B _ I D   P W M   P u l s e   F i n i s h e d   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ H A L F _ C B _ I D   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ C O M M U T A T I O N _ C B _ I D   C o m m u t a t i o n   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ C O M M U T A T I O N _ H A L F _ C B _ I D   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k   I D 
     *                     @ a r g   @ r e f   H A L _ T I M _ B R E A K _ C B _ I D   B r e a k   C a l l b a c k   I D 
     *                     @ r e t v a l   s t a t u s 
     * / 
 H A L _ S t a t u s T y p e D e f   H A L _ T I M _ U n R e g i s t e r C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ,   H A L _ T I M _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ) 
 { 
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ; 
 
     / *   P r o c e s s   l o c k e d   * / 
     _ _ H A L _ L O C K ( h t i m ) ; 
 
     i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E A D Y ) 
     { 
         s w i t c h   ( C a l l b a c k I D ) 
         { 
             c a s e   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   B a s e   M s p I n i t   C a l l b a c k   * / 
                 h t i m - > B a s e _ M s p I n i t C a l l b a c k                             =   H A L _ T I M _ B a s e _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   B a s e   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > B a s e _ M s p D e I n i t C a l l b a c k                         =   H A L _ T I M _ B a s e _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > I C _ M s p I n i t C a l l b a c k                                 =   H A L _ T I M _ I C _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > I C _ M s p D e I n i t C a l l b a c k                             =   H A L _ T I M _ I C _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O C   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > O C _ M s p I n i t C a l l b a c k                                 =   H A L _ T I M _ O C _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O C   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > O C _ M s p D e I n i t C a l l b a c k                             =   H A L _ T I M _ O C _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > P W M _ M s p I n i t C a l l b a c k                               =   H A L _ T I M _ P W M _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > P W M _ M s p D e I n i t C a l l b a c k                           =   H A L _ T I M _ P W M _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O n e   P u l s e   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k                     =   H A L _ T I M _ O n e P u l s e _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O n e   P u l s e   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k                 =   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   E n c o d e r   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k                       =   H A L _ T I M _ E n c o d e r _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   E n c o d e r   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k                   =   H A L _ T I M _ E n c o d e r _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   H a l l   S e n s o r   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k                 =   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   H a l l   S e n s o r   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k             =   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P E R I O D _ E L A P S E D _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P e r i o d   E l a p s e d   C a l l b a c k   * / 
                 h t i m - > P e r i o d E l a p s e d C a l l b a c k                           =   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P E R I O D _ E L A P S E D _ H A L F _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P e r i o d   E l a p s e d   h a l f   c o m p l e t e   C a l l b a c k   * / 
                 h t i m - > P e r i o d E l a p s e d H a l f C p l t C a l l b a c k           =   H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ T R I G G E R _ C B _ I D   : 
                 / *   L e g a c y   w e a k   T r i g g e r   C a l l b a c k   * / 
                 h t i m - > T r i g g e r C a l l b a c k                                       =   H A L _ T I M _ T r i g g e r C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ T R I G G E R _ H A L F _ C B _ I D   : 
                 / *   L e g a c y   w e a k   T r i g g e r   h a l f   c o m p l e t e   C a l l b a c k   * / 
                 h t i m - > T r i g g e r H a l f C p l t C a l l b a c k                       =   H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ C A P T U R E _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   C a p t u r e   C a l l b a c k   * / 
                 h t i m - > I C _ C a p t u r e C a l l b a c k                                 =   H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ C A P T U R E _ H A L F _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   C a p t u r e   h a l f   c o m p l e t e   C a l l b a c k   * / 
                 h t i m - > I C _ C a p t u r e H a l f C p l t C a l l b a c k                 =   H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ D E L A Y _ E L A P S E D _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O C   D e l a y   E l a p s e d   C a l l b a c k   * / 
                 h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k                       =   H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   P u l s e   F i n i s h e d   C a l l b a c k   * / 
                 h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k                   =   H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ P U L S E _ F I N I S H E D _ H A L F _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   P u l s e   F i n i s h e d   h a l f   c o m p l e t e   C a l l b a c k   * / 
                 h t i m - > P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k   =   H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E R R O R _ C B _ I D   : 
                 / *   L e g a c y   w e a k   E r r o r   C a l l b a c k   * / 
                 h t i m - > E r r o r C a l l b a c k                                           =   H A L _ T I M _ E r r o r C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ C O M M U T A T I O N _ C B _ I D   : 
                 / *   L e g a c y   w e a k   C o m m u t a t i o n   C a l l b a c k   * / 
                 h t i m - > C o m m u t a t i o n C a l l b a c k                               =   H A L _ T I M E x _ C o m m u t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ C O M M U T A T I O N _ H A L F _ C B _ I D   : 
                 / *   L e g a c y   w e a k   C o m m u t a t i o n   h a l f   c o m p l e t e   C a l l b a c k   * / 
                 h t i m - > C o m m u t a t i o n H a l f C p l t C a l l b a c k               =   H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B R E A K _ C B _ I D   : 
                 / *   L e g a c y   w e a k   B r e a k   C a l l b a c k   * / 
                 h t i m - > B r e a k C a l l b a c k                                           =   H A L _ T I M E x _ B r e a k C a l l b a c k ; 
                 b r e a k ; 
 
             d e f a u l t   : 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 s t a t u s   =     H A L _ E R R O R ; 
                 b r e a k ; 
         } 
     } 
     e l s e   i f   ( h t i m - > S t a t e   = =   H A L _ T I M _ S T A T E _ R E S E T ) 
     { 
         s w i t c h   ( C a l l b a c k I D ) 
         { 
             c a s e   H A L _ T I M _ B A S E _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   B a s e   M s p I n i t   C a l l b a c k   * / 
                 h t i m - > B a s e _ M s p I n i t C a l l b a c k                   =   H A L _ T I M _ B a s e _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ B A S E _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   B a s e   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > B a s e _ M s p D e I n i t C a l l b a c k               =   H A L _ T I M _ B a s e _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > I C _ M s p I n i t C a l l b a c k                       =   H A L _ T I M _ I C _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ I C _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   I C   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > I C _ M s p D e I n i t C a l l b a c k                   =   H A L _ T I M _ I C _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O C   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > O C _ M s p I n i t C a l l b a c k                       =   H A L _ T I M _ O C _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O C _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O C   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > O C _ M s p D e I n i t C a l l b a c k                   =   H A L _ T I M _ O C _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > P W M _ M s p I n i t C a l l b a c k                     =   H A L _ T I M _ P W M _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ P W M _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   P W M   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > P W M _ M s p D e I n i t C a l l b a c k                 =   H A L _ T I M _ P W M _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O n e   P u l s e   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > O n e P u l s e _ M s p I n i t C a l l b a c k           =   H A L _ T I M _ O n e P u l s e _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ O N E _ P U L S E _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   O n e   P u l s e   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > O n e P u l s e _ M s p D e I n i t C a l l b a c k       =   H A L _ T I M _ O n e P u l s e _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   E n c o d e r   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > E n c o d e r _ M s p I n i t C a l l b a c k             =   H A L _ T I M _ E n c o d e r _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ E N C O D E R _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   E n c o d e r   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > E n c o d e r _ M s p D e I n i t C a l l b a c k         =   H A L _ T I M _ E n c o d e r _ M s p D e I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   H a l l   S e n s o r   M s p   I n i t   C a l l b a c k   * / 
                 h t i m - > H a l l S e n s o r _ M s p I n i t C a l l b a c k       =   H A L _ T I M E x _ H a l l S e n s o r _ M s p I n i t ; 
                 b r e a k ; 
 
             c a s e   H A L _ T I M _ H A L L _ S E N S O R _ M S P D E I N I T _ C B _ I D   : 
                 / *   L e g a c y   w e a k   H a l l   S e n s o r   M s p   D e I n i t   C a l l b a c k   * / 
                 h t i m - > H a l l S e n s o r _ M s p D e I n i t C a l l b a c k   =   H A L _ T I M E x _ H a l l S e n s o r _ M s p D e I n i t ; 
                 b r e a k ; 
 
             d e f a u l t   : 
                 / *   R e t u r n   e r r o r   s t a t u s   * / 
                 s t a t u s   =     H A L _ E R R O R ; 
                 b r e a k ; 
         } 
     } 
     e l s e 
     { 
         / *   R e t u r n   e r r o r   s t a t u s   * / 
         s t a t u s   =     H A L _ E R R O R ; 
     } 
 
     / *   R e l e a s e   L o c k   * / 
     _ _ H A L _ U N L O C K ( h t i m ) ; 
 
     r e t u r n   s t a t u s ; 
 } 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1 0   T I M   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     *     @ b r i e f       T I M   P e r i p h e r a l   S t a t e   f u n c t i o n s 
     * 
 @ v e r b a t i m 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
                                                 # # # # #   P e r i p h e r a l   S t a t e   f u n c t i o n s   # # # # # 
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = 
         [ . . ] 
         T h i s   s u b s e c t i o n   p e r m i t s   t o   g e t   i n   r u n - t i m e   t h e   s t a t u s   o f   t h e   p e r i p h e r a l 
         a n d   t h e   d a t a   f l o w . 
 
 @ e n d v e r b a t i m 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   B a s e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   B a s e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ B a s e _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   O C   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   O u t p u t   C o m p a r e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ O C _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   P W M   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ P W M _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   I n p u t   C a p t u r e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   I C   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ I C _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   O n e   P u l s e   M o d e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   O P M   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ O n e P u l s e _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   E n c o d e r   M o d e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   E n c o d e r   I n t e r f a c e   h a n d l e 
     *   @ r e t v a l   H A L   s t a t e 
     * / 
 H A L _ T I M _ S t a t e T y p e D e f   H A L _ T I M _ E n c o d e r _ G e t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > S t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   t h e   T I M   E n c o d e r   M o d e   h a n d l e   s t a t e . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   A c t i v e   c h a n n e l 
     * / 
 H A L _ T I M _ A c t i v e C h a n n e l   H A L _ T I M _ G e t A c t i v e C h a n n e l ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     r e t u r n   h t i m - > C h a n n e l ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   a c t u a l   s t a t e   o f   t h e   T I M   c h a n n e l . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     C h a n n e l   T I M   C h a n n e l 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4 
     *                         @ a r g   T I M _ C H A N N E L _ 5 :   T I M   C h a n n e l   5 
     *                         @ a r g   T I M _ C H A N N E L _ 6 :   T I M   C h a n n e l   6 
     *   @ r e t v a l   T I M   C h a n n e l   s t a t e 
     * / 
 H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   H A L _ T I M _ G e t C h a n n e l S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ,     u i n t 3 2 _ t   C h a n n e l ) 
 { 
     H A L _ T I M _ C h a n n e l S t a t e T y p e D e f   c h a n n e l _ s t a t e ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C X _ I N S T A N C E ( h t i m - > I n s t a n c e ,   C h a n n e l ) ) ; 
 
     c h a n n e l _ s t a t e   =   T I M _ C H A N N E L _ S T A T E _ G E T ( h t i m ,   C h a n n e l ) ; 
 
     r e t u r n   c h a n n e l _ s t a t e ; 
 } 
 
 / * * 
     *   @ b r i e f     R e t u r n   a c t u a l   s t a t e   o f   a   D M A   b u r s t   o p e r a t i o n . 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ r e t v a l   D M A   b u r s t   s t a t e 
     * / 
 H A L _ T I M _ D M A B u r s t S t a t e T y p e D e f   H A L _ T I M _ D M A B u r s t S t a t e ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ D M A B U R S T _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
 
     r e t u r n   h t i m - > D M A B u r s t S t a t e ; 
 } 
 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 
 / * *   @ d e f g r o u p   T I M _ P r i v a t e _ F u n c t i o n s   T I M   P r i v a t e   F u n c t i o n s 
     *   @ { 
     * / 
 
 / * * 
     *   @ b r i e f     T I M   D M A   e r r o r   c a l l b a c k 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
         T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 4 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
     } 
     e l s e 
     { 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > E r r o r C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ E r r o r C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   D e l a y   P u l s e   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A D e l a y P u l s e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 4 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   D e l a y   P u l s e   h a l f   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ D M A D e l a y P u l s e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   C a p t u r e   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ D M A C a p t u r e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 1 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 2 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 3 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
 
         i f   ( h d m a - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
         { 
             T I M _ C H A N N E L _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 4 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
             T I M _ C H A N N E L _ N _ S T A T E _ S E T ( h t i m ,   T I M _ C H A N N E L _ 4 ,   H A L _ T I M _ C H A N N E L _ S T A T E _ R E A D Y ) ; 
         } 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   C a p t u r e   h a l f   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ D M A C a p t u r e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 1 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 1 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 2 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 2 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 3 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 3 ; 
     } 
     e l s e   i f   ( h d m a   = =   h t i m - > h d m a [ T I M _ D M A _ I D _ C C 4 ] ) 
     { 
         h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ 4 ; 
     } 
     e l s e 
     { 
         / *   n o t h i n g   t o   d o   * / 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > I C _ C a p t u r e H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
     h t i m - > C h a n n e l   =   H A L _ T I M _ A C T I V E _ C H A N N E L _ C L E A R E D ; 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   P e r i o d   E l a p s e   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A P e r i o d E l a p s e d C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h t i m - > h d m a [ T I M _ D M A _ I D _ U P D A T E ] - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
     { 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > P e r i o d E l a p s e d C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   P e r i o d   E l a p s e   h a l f   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A P e r i o d E l a p s e d H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   T r i g g e r   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A T r i g g e r C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
     i f   ( h t i m - > h d m a [ T I M _ D M A _ I D _ T R I G G E R ] - > I n i t . M o d e   = =   D M A _ N O R M A L ) 
     { 
         h t i m - > S t a t e   =   H A L _ T I M _ S T A T E _ R E A D Y ; 
     } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > T r i g g e r C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ T r i g g e r C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 / * * 
     *   @ b r i e f     T I M   D M A   T r i g g e r   h a l f   c o m p l e t e   c a l l b a c k . 
     *   @ p a r a m     h d m a   p o i n t e r   t o   D M A   h a n d l e . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ D M A T r i g g e r H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) 
 { 
     T I M _ H a n d l e T y p e D e f   * h t i m   =   ( T I M _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ; 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
     h t i m - > T r i g g e r H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e l s e 
     H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k ( h t i m ) ; 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 } 
 
 / * * 
     *   @ b r i e f     T i m e   B a s e   c o n f i g u r a t i o n 
     *   @ p a r a m     T I M x   T I M   p e r i p h e r a l 
     *   @ p a r a m     S t r u c t u r e   T I M   B a s e   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ B a s e _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ B a s e _ I n i t T y p e D e f   * S t r u c t u r e ) 
 { 
     u i n t 3 2 _ t   t m p c r 1 ; 
     t m p c r 1   =   T I M x - > C R 1 ; 
 
     / *   S e t   T I M   T i m e   B a s e   U n i t   p a r a m e t e r s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * / 
     i f   ( I S _ T I M _ C O U N T E R _ M O D E _ S E L E C T _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   S e l e c t   t h e   C o u n t e r   M o d e   * / 
         t m p c r 1   & =   ~ ( T I M _ C R 1 _ D I R   |   T I M _ C R 1 _ C M S ) ; 
         t m p c r 1   | =   S t r u c t u r e - > C o u n t e r M o d e ; 
     } 
 
     i f   ( I S _ T I M _ C L O C K _ D I V I S I O N _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   S e t   t h e   c l o c k   d i v i s i o n   * / 
         t m p c r 1   & =   ~ T I M _ C R 1 _ C K D ; 
         t m p c r 1   | =   ( u i n t 3 2 _ t ) S t r u c t u r e - > C l o c k D i v i s i o n ; 
     } 
 
     / *   S e t   t h e   a u t o - r e l o a d   p r e l o a d   * / 
     M O D I F Y _ R E G ( t m p c r 1 ,   T I M _ C R 1 _ A R P E ,   S t r u c t u r e - > A u t o R e l o a d P r e l o a d ) ; 
 
     T I M x - > C R 1   =   t m p c r 1 ; 
 
     / *   S e t   t h e   A u t o r e l o a d   v a l u e   * / 
     T I M x - > A R R   =   ( u i n t 3 2 _ t ) S t r u c t u r e - > P e r i o d   ; 
 
     / *   S e t   t h e   P r e s c a l e r   v a l u e   * / 
     T I M x - > P S C   =   S t r u c t u r e - > P r e s c a l e r ; 
 
     i f   ( I S _ T I M _ R E P E T I T I O N _ C O U N T E R _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   S e t   t h e   R e p e t i t i o n   C o u n t e r   v a l u e   * / 
         T I M x - > R C R   =   S t r u c t u r e - > R e p e t i t i o n C o u n t e r ; 
     } 
 
     / *   G e n e r a t e   a n   u p d a t e   e v e n t   t o   r e l o a d   t h e   P r e s c a l e r 
           a n d   t h e   r e p e t i t i o n   c o u n t e r   ( o n l y   f o r   a d v a n c e d   t i m e r )   v a l u e   i m m e d i a t e l y   * / 
     T I M x - > E G R   =   T I M _ E G R _ U G ; 
 } 
 
 / * * 
     *   @ b r i e f     T i m e r   O u t p u t   C o m p a r e   1   c o n f i g u r a t i o n 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     O C _ C o n f i g   T h e   o u t p u t   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ O C 1 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p c c m r x ; 
     u i n t 3 2 _ t   t m p c c e r ; 
     u i n t 3 2 _ t   t m p c r 2 ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 1 E ; 
 
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * / 
     t m p c c e r   =   T I M x - > C C E R ; 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =     T I M x - > C R 2 ; 
 
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * / 
     t m p c c m r x   =   T I M x - > C C M R 1 ; 
 
     / *   R e s e t   t h e   O u t p u t   C o m p a r e   M o d e   B i t s   * / 
     t m p c c m r x   & =   ~ T I M _ C C M R 1 _ O C 1 M ; 
     t m p c c m r x   & =   ~ T I M _ C C M R 1 _ C C 1 S ; 
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * / 
     t m p c c m r x   | =   O C _ C o n f i g - > O C M o d e ; 
 
     / *   R e s e t   t h e   O u t p u t   P o l a r i t y   l e v e l   * / 
     t m p c c e r   & =   ~ T I M _ C C E R _ C C 1 P ; 
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * / 
     t m p c c e r   | =   O C _ C o n f i g - > O C P o l a r i t y ; 
 
     i f   ( I S _ T I M _ C C X N _ I N S T A N C E ( T I M x ,   T I M _ C H A N N E L _ 1 ) ) 
     { 
         / *   C h e c k   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N _ P O L A R I T Y ( O C _ C o n f i g - > O C N P o l a r i t y ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   N   P o l a r i t y   l e v e l   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 1 N P ; 
         / *   S e t   t h e   O u t p u t   N   P o l a r i t y   * / 
         t m p c c e r   | =   O C _ C o n f i g - > O C N P o l a r i t y ; 
         / *   R e s e t   t h e   O u t p u t   N   S t a t e   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 1 N E ; 
     } 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   C h e c k   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N I D L E _ S T A T E ( O C _ C o n f i g - > O C N I d l e S t a t e ) ) ; 
         a s s e r t _ p a r a m ( I S _ T I M _ O C I D L E _ S T A T E ( O C _ C o n f i g - > O C I d l e S t a t e ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   C o m p a r e   a n d   O u t p u t   C o m p a r e   N   I D L E   S t a t e   * / 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 1 ; 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 1 N ; 
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * / 
         t m p c r 2   | =   O C _ C o n f i g - > O C I d l e S t a t e ; 
         / *   S e t   t h e   O u t p u t   N   I d l e   s t a t e   * / 
         t m p c r 2   | =   O C _ C o n f i g - > O C N I d l e S t a t e ; 
     } 
 
     / *   W r i t e   t o   T I M x   C R 2   * / 
     T I M x - > C R 2   =   t m p c r 2 ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   * / 
     T I M x - > C C M R 1   =   t m p c c m r x ; 
 
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * / 
     T I M x - > C C R 1   =   O C _ C o n f i g - > P u l s e ; 
 
     / *   W r i t e   t o   T I M x   C C E R   * / 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     T i m e r   O u t p u t   C o m p a r e   2   c o n f i g u r a t i o n 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     O C _ C o n f i g   T h e   o u t p u t   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ O C 2 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p c c m r x ; 
     u i n t 3 2 _ t   t m p c c e r ; 
     u i n t 3 2 _ t   t m p c r 2 ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   2 :   R e s e t   t h e   C C 2 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 2 E ; 
 
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * / 
     t m p c c e r   =   T I M x - > C C E R ; 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =     T I M x - > C R 2 ; 
 
     / *   G e t   t h e   T I M x   C C M R 1   r e g i s t e r   v a l u e   * / 
     t m p c c m r x   =   T I M x - > C C M R 1 ; 
 
     / *   R e s e t   t h e   O u t p u t   C o m p a r e   m o d e   a n d   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * / 
     t m p c c m r x   & =   ~ T I M _ C C M R 1 _ O C 2 M ; 
     t m p c c m r x   & =   ~ T I M _ C C M R 1 _ C C 2 S ; 
 
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * / 
     t m p c c m r x   | =   ( O C _ C o n f i g - > O C M o d e   < <   8 U ) ; 
 
     / *   R e s e t   t h e   O u t p u t   P o l a r i t y   l e v e l   * / 
     t m p c c e r   & =   ~ T I M _ C C E R _ C C 2 P ; 
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * / 
     t m p c c e r   | =   ( O C _ C o n f i g - > O C P o l a r i t y   < <   4 U ) ; 
 
     i f   ( I S _ T I M _ C C X N _ I N S T A N C E ( T I M x ,   T I M _ C H A N N E L _ 2 ) ) 
     { 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N _ P O L A R I T Y ( O C _ C o n f i g - > O C N P o l a r i t y ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   N   P o l a r i t y   l e v e l   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 2 N P ; 
         / *   S e t   t h e   O u t p u t   N   P o l a r i t y   * / 
         t m p c c e r   | =   ( O C _ C o n f i g - > O C N P o l a r i t y   < <   4 U ) ; 
         / *   R e s e t   t h e   O u t p u t   N   S t a t e   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 2 N E ; 
 
     } 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   C h e c k   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N I D L E _ S T A T E ( O C _ C o n f i g - > O C N I d l e S t a t e ) ) ; 
         a s s e r t _ p a r a m ( I S _ T I M _ O C I D L E _ S T A T E ( O C _ C o n f i g - > O C I d l e S t a t e ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   C o m p a r e   a n d   O u t p u t   C o m p a r e   N   I D L E   S t a t e   * / 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 2 ; 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 2 N ; 
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * / 
         t m p c r 2   | =   ( O C _ C o n f i g - > O C I d l e S t a t e   < <   2 U ) ; 
         / *   S e t   t h e   O u t p u t   N   I d l e   s t a t e   * / 
         t m p c r 2   | =   ( O C _ C o n f i g - > O C N I d l e S t a t e   < <   2 U ) ; 
     } 
 
     / *   W r i t e   t o   T I M x   C R 2   * / 
     T I M x - > C R 2   =   t m p c r 2 ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   * / 
     T I M x - > C C M R 1   =   t m p c c m r x ; 
 
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * / 
     T I M x - > C C R 2   =   O C _ C o n f i g - > P u l s e ; 
 
     / *   W r i t e   t o   T I M x   C C E R   * / 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     T i m e r   O u t p u t   C o m p a r e   3   c o n f i g u r a t i o n 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     O C _ C o n f i g   T h e   o u t p u t   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ O C 3 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p c c m r x ; 
     u i n t 3 2 _ t   t m p c c e r ; 
     u i n t 3 2 _ t   t m p c r 2 ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   3 :   R e s e t   t h e   C C 2 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 3 E ; 
 
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * / 
     t m p c c e r   =   T I M x - > C C E R ; 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =     T I M x - > C R 2 ; 
 
     / *   G e t   t h e   T I M x   C C M R 2   r e g i s t e r   v a l u e   * / 
     t m p c c m r x   =   T I M x - > C C M R 2 ; 
 
     / *   R e s e t   t h e   O u t p u t   C o m p a r e   m o d e   a n d   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * / 
     t m p c c m r x   & =   ~ T I M _ C C M R 2 _ O C 3 M ; 
     t m p c c m r x   & =   ~ T I M _ C C M R 2 _ C C 3 S ; 
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * / 
     t m p c c m r x   | =   O C _ C o n f i g - > O C M o d e ; 
 
     / *   R e s e t   t h e   O u t p u t   P o l a r i t y   l e v e l   * / 
     t m p c c e r   & =   ~ T I M _ C C E R _ C C 3 P ; 
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * / 
     t m p c c e r   | =   ( O C _ C o n f i g - > O C P o l a r i t y   < <   8 U ) ; 
 
     i f   ( I S _ T I M _ C C X N _ I N S T A N C E ( T I M x ,   T I M _ C H A N N E L _ 3 ) ) 
     { 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N _ P O L A R I T Y ( O C _ C o n f i g - > O C N P o l a r i t y ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   N   P o l a r i t y   l e v e l   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 3 N P ; 
         / *   S e t   t h e   O u t p u t   N   P o l a r i t y   * / 
         t m p c c e r   | =   ( O C _ C o n f i g - > O C N P o l a r i t y   < <   8 U ) ; 
         / *   R e s e t   t h e   O u t p u t   N   S t a t e   * / 
         t m p c c e r   & =   ~ T I M _ C C E R _ C C 3 N E ; 
     } 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   C h e c k   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ O C N I D L E _ S T A T E ( O C _ C o n f i g - > O C N I d l e S t a t e ) ) ; 
         a s s e r t _ p a r a m ( I S _ T I M _ O C I D L E _ S T A T E ( O C _ C o n f i g - > O C I d l e S t a t e ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   C o m p a r e   a n d   O u t p u t   C o m p a r e   N   I D L E   S t a t e   * / 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 3 ; 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 3 N ; 
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * / 
         t m p c r 2   | =   ( O C _ C o n f i g - > O C I d l e S t a t e   < <   4 U ) ; 
         / *   S e t   t h e   O u t p u t   N   I d l e   s t a t e   * / 
         t m p c r 2   | =   ( O C _ C o n f i g - > O C N I d l e S t a t e   < <   4 U ) ; 
     } 
 
     / *   W r i t e   t o   T I M x   C R 2   * / 
     T I M x - > C R 2   =   t m p c r 2 ; 
 
     / *   W r i t e   t o   T I M x   C C M R 2   * / 
     T I M x - > C C M R 2   =   t m p c c m r x ; 
 
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * / 
     T I M x - > C C R 3   =   O C _ C o n f i g - > P u l s e ; 
 
     / *   W r i t e   t o   T I M x   C C E R   * / 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     T i m e r   O u t p u t   C o m p a r e   4   c o n f i g u r a t i o n 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     O C _ C o n f i g   T h e   o u t p u t   c o n f i g u r a t i o n   s t r u c t u r e 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ O C 4 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   T I M _ O C _ I n i t T y p e D e f   * O C _ C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p c c m r x ; 
     u i n t 3 2 _ t   t m p c c e r ; 
     u i n t 3 2 _ t   t m p c r 2 ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   4 :   R e s e t   t h e   C C 4 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 4 E ; 
 
     / *   G e t   t h e   T I M x   C C E R   r e g i s t e r   v a l u e   * / 
     t m p c c e r   =   T I M x - > C C E R ; 
     / *   G e t   t h e   T I M x   C R 2   r e g i s t e r   v a l u e   * / 
     t m p c r 2   =     T I M x - > C R 2 ; 
 
     / *   G e t   t h e   T I M x   C C M R 2   r e g i s t e r   v a l u e   * / 
     t m p c c m r x   =   T I M x - > C C M R 2 ; 
 
     / *   R e s e t   t h e   O u t p u t   C o m p a r e   m o d e   a n d   C a p t u r e / C o m p a r e   s e l e c t i o n   B i t s   * / 
     t m p c c m r x   & =   ~ T I M _ C C M R 2 _ O C 4 M ; 
     t m p c c m r x   & =   ~ T I M _ C C M R 2 _ C C 4 S ; 
 
     / *   S e l e c t   t h e   O u t p u t   C o m p a r e   M o d e   * / 
     t m p c c m r x   | =   ( O C _ C o n f i g - > O C M o d e   < <   8 U ) ; 
 
     / *   R e s e t   t h e   O u t p u t   P o l a r i t y   l e v e l   * / 
     t m p c c e r   & =   ~ T I M _ C C E R _ C C 4 P ; 
     / *   S e t   t h e   O u t p u t   C o m p a r e   P o l a r i t y   * / 
     t m p c c e r   | =   ( O C _ C o n f i g - > O C P o l a r i t y   < <   1 2 U ) ; 
 
     i f   ( I S _ T I M _ B R E A K _ I N S T A N C E ( T I M x ) ) 
     { 
         / *   C h e c k   p a r a m e t e r s   * / 
         a s s e r t _ p a r a m ( I S _ T I M _ O C I D L E _ S T A T E ( O C _ C o n f i g - > O C I d l e S t a t e ) ) ; 
 
         / *   R e s e t   t h e   O u t p u t   C o m p a r e   I D L E   S t a t e   * / 
         t m p c r 2   & =   ~ T I M _ C R 2 _ O I S 4 ; 
 
         / *   S e t   t h e   O u t p u t   I d l e   s t a t e   * / 
         t m p c r 2   | =   ( O C _ C o n f i g - > O C I d l e S t a t e   < <   6 U ) ; 
     } 
 
     / *   W r i t e   t o   T I M x   C R 2   * / 
     T I M x - > C R 2   =   t m p c r 2 ; 
 
     / *   W r i t e   t o   T I M x   C C M R 2   * / 
     T I M x - > C C M R 2   =   t m p c c m r x ; 
 
     / *   S e t   t h e   C a p t u r e   C o m p a r e   R e g i s t e r   v a l u e   * / 
     T I M x - > C C R 4   =   O C _ C o n f i g - > P u l s e ; 
 
     / *   W r i t e   t o   T I M x   C C E R   * / 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     S l a v e   T i m e r   c o n f i g u r a t i o n   f u n c t i o n 
     *   @ p a r a m     h t i m   T I M   h a n d l e 
     *   @ p a r a m     s S l a v e C o n f i g   S l a v e   t i m e r   c o n f i g u r a t i o n 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   H A L _ S t a t u s T y p e D e f   T I M _ S l a v e T i m e r _ S e t C o n f i g ( T I M _ H a n d l e T y p e D e f   * h t i m , 
                                                                                                     T I M _ S l a v e C o n f i g T y p e D e f   * s S l a v e C o n f i g ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   G e t   t h e   T I M x   S M C R   r e g i s t e r   v a l u e   * / 
     t m p s m c r   =   h t i m - > I n s t a n c e - > S M C R ; 
 
     / *   R e s e t   t h e   T r i g g e r   S e l e c t i o n   B i t s   * / 
     t m p s m c r   & =   ~ T I M _ S M C R _ T S ; 
     / *   S e t   t h e   I n p u t   T r i g g e r   s o u r c e   * / 
     t m p s m c r   | =   s S l a v e C o n f i g - > I n p u t T r i g g e r ; 
 
     / *   R e s e t   t h e   s l a v e   m o d e   B i t s   * / 
     t m p s m c r   & =   ~ T I M _ S M C R _ S M S ; 
     / *   S e t   t h e   s l a v e   m o d e   * / 
     t m p s m c r   | =   s S l a v e C o n f i g - > S l a v e M o d e ; 
 
     / *   W r i t e   t o   T I M x   S M C R   * / 
     h t i m - > I n s t a n c e - > S M C R   =   t m p s m c r ; 
 
     / *   C o n f i g u r e   t h e   t r i g g e r   p r e s c a l e r ,   f i l t e r ,   a n d   p o l a r i t y   * / 
     s w i t c h   ( s S l a v e C o n f i g - > I n p u t T r i g g e r ) 
     { 
         c a s e   T I M _ T S _ E T R F : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C L O C K S O U R C E _ E T R M O D E 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R P R E S C A L E R ( s S l a v e C o n f i g - > T r i g g e r P r e s c a l e r ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R P O L A R I T Y ( s S l a v e C o n f i g - > T r i g g e r P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R F I L T E R ( s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ) ; 
             / *   C o n f i g u r e   t h e   E T R   T r i g g e r   s o u r c e   * / 
             T I M _ E T R _ S e t C o n f i g ( h t i m - > I n s t a n c e , 
                                                 s S l a v e C o n f i g - > T r i g g e r P r e s c a l e r , 
                                                 s S l a v e C o n f i g - > T r i g g e r P o l a r i t y , 
                                                 s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ T S _ T I 1 F _ E D : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R F I L T E R ( s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ) ; 
 
             i f   ( s S l a v e C o n f i g - > S l a v e M o d e   = =   T I M _ S L A V E M O D E _ G A T E D ) 
             { 
                 r e t u r n   H A L _ E R R O R ; 
             } 
 
             / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * / 
             t m p c c e r   =   h t i m - > I n s t a n c e - > C C E R ; 
             h t i m - > I n s t a n c e - > C C E R   & =   ~ T I M _ C C E R _ C C 1 E ; 
             t m p c c m r 1   =   h t i m - > I n s t a n c e - > C C M R 1 ; 
 
             / *   S e t   t h e   f i l t e r   * / 
             t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ I C 1 F ; 
             t m p c c m r 1   | =   ( ( s S l a v e C o n f i g - > T r i g g e r F i l t e r )   < <   4 U ) ; 
 
             / *   W r i t e   t o   T I M x   C C M R 1   a n d   C C E R   r e g i s t e r s   * / 
             h t i m - > I n s t a n c e - > C C M R 1   =   t m p c c m r 1 ; 
             h t i m - > I n s t a n c e - > C C E R   =   t m p c c e r ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ T S _ T I 1 F P 1 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R P O L A R I T Y ( s S l a v e C o n f i g - > T r i g g e r P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R F I L T E R ( s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ) ; 
 
             / *   C o n f i g u r e   T I 1   F i l t e r   a n d   P o l a r i t y   * / 
             T I M _ T I 1 _ C o n f i g I n p u t S t a g e ( h t i m - > I n s t a n c e , 
                                                               s S l a v e C o n f i g - > T r i g g e r P o l a r i t y , 
                                                               s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ T S _ T I 2 F P 2 : 
         { 
             / *   C h e c k   t h e   p a r a m e t e r s   * / 
             a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R P O L A R I T Y ( s S l a v e C o n f i g - > T r i g g e r P o l a r i t y ) ) ; 
             a s s e r t _ p a r a m ( I S _ T I M _ T R I G G E R F I L T E R ( s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ) ; 
 
             / *   C o n f i g u r e   T I 2   F i l t e r   a n d   P o l a r i t y   * / 
             T I M _ T I 2 _ C o n f i g I n p u t S t a g e ( h t i m - > I n s t a n c e , 
                                                               s S l a v e C o n f i g - > T r i g g e r P o l a r i t y , 
                                                               s S l a v e C o n f i g - > T r i g g e r F i l t e r ) ; 
             b r e a k ; 
         } 
 
         c a s e   T I M _ T S _ I T R 0 : 
         c a s e   T I M _ T S _ I T R 1 : 
         c a s e   T I M _ T S _ I T R 2 : 
         c a s e   T I M _ T S _ I T R 3 : 
             { 
                 / *   C h e c k   t h e   p a r a m e t e r   * / 
                 a s s e r t _ p a r a m ( I S _ T I M _ C C 2 _ I N S T A N C E ( h t i m - > I n s t a n c e ) ) ; 
                 b r e a k ; 
             } 
 
         d e f a u l t : 
             b r e a k ; 
     } 
     r e t u r n   H A L _ O K ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I 1   a s   I n p u t . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l . 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ B O T H E D G E 
     *   @ p a r a m     T I M _ I C S e l e c t i o n   s p e c i f i e s   t h e   i n p u t   t o   b e   u s e d . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ D I R E C T T I :   T I M   I n p u t   1   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 1 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ I N D I R E C T T I :   T I M   I n p u t   1   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 2 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ T R C :   T I M   I n p u t   1   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   T R C . 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ r e t v a l   N o n e 
     *   @ n o t e   T I M _ I C F i l t e r   a n d   T I M _ I C P o l a r i t y   a r e   n o t   u s e d   i n   I N D I R E C T   m o d e   a s   T I 2 F P 1 
     *               ( o n   c h a n n e l 2   p a t h )   i s   u s e d   a s   t h e   i n p u t   s i g n a l .   T h e r e f o r e   C C M R 1   m u s t   b e 
     *                 p r o t e c t e d   a g a i n s t   u n - i n i t i a l i z e d   f i l t e r   a n d   p o l a r i t y   v a l u e s . 
     * / 
 v o i d   T I M _ T I 1 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                               u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 1 E ; 
     t m p c c m r 1   =   T I M x - > C C M R 1 ; 
     t m p c c e r   =   T I M x - > C C E R ; 
 
     / *   S e l e c t   t h e   I n p u t   * / 
     i f   ( I S _ T I M _ C C 2 _ I N S T A N C E ( T I M x )   ! =   R E S E T ) 
     { 
         t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ C C 1 S ; 
         t m p c c m r 1   | =   T I M _ I C S e l e c t i o n ; 
     } 
     e l s e 
     { 
         t m p c c m r 1   | =   T I M _ C C M R 1 _ C C 1 S _ 0 ; 
     } 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ I C 1 F ; 
     t m p c c m r 1   | =   ( ( T I M _ I C F i l t e r   < <   4 U )   &   T I M _ C C M R 1 _ I C 1 F ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 1 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P ) ; 
     t m p c c e r   | =   ( T I M _ I C P o l a r i t y   &   ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P ) ) ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 1   =   t m p c c m r 1 ; 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   P o l a r i t y   a n d   F i l t e r   f o r   T I 1 . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l . 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ B O T H E D G E 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ T I 1 _ C o n f i g I n p u t S t a g e ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   1 :   R e s e t   t h e   C C 1 E   B i t   * / 
     t m p c c e r   =   T I M x - > C C E R ; 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 1 E ; 
     t m p c c m r 1   =   T I M x - > C C M R 1 ; 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ I C 1 F ; 
     t m p c c m r 1   | =   ( T I M _ I C F i l t e r   < <   4 U ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 1 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 1 P   |   T I M _ C C E R _ C C 1 N P ) ; 
     t m p c c e r   | =   T I M _ I C P o l a r i t y ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 1   =   t m p c c m r 1 ; 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I 2   a s   I n p u t . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ B O T H E D G E 
     *   @ p a r a m     T I M _ I C S e l e c t i o n   s p e c i f i e s   t h e   i n p u t   t o   b e   u s e d . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ D I R E C T T I :   T I M   I n p u t   2   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 2 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ I N D I R E C T T I :   T I M   I n p u t   2   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 1 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ T R C :   T I M   I n p u t   2   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   T R C . 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ r e t v a l   N o n e 
     *   @ n o t e   T I M _ I C F i l t e r   a n d   T I M _ I C P o l a r i t y   a r e   n o t   u s e d   i n   I N D I R E C T   m o d e   a s   T I 1 F P 2 
     *               ( o n   c h a n n e l 1   p a t h )   i s   u s e d   a s   t h e   i n p u t   s i g n a l .   T h e r e f o r e   C C M R 1   m u s t   b e 
     *                 p r o t e c t e d   a g a i n s t   u n - i n i t i a l i z e d   f i l t e r   a n d   p o l a r i t y   v a l u e s . 
     * / 
 s t a t i c   v o i d   T I M _ T I 2 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   2 :   R e s e t   t h e   C C 2 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 2 E ; 
     t m p c c m r 1   =   T I M x - > C C M R 1 ; 
     t m p c c e r   =   T I M x - > C C E R ; 
 
     / *   S e l e c t   t h e   I n p u t   * / 
     t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ C C 2 S ; 
     t m p c c m r 1   | =   ( T I M _ I C S e l e c t i o n   < <   8 U ) ; 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ I C 2 F ; 
     t m p c c m r 1   | =   ( ( T I M _ I C F i l t e r   < <   1 2 U )   &   T I M _ C C M R 1 _ I C 2 F ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 2 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ; 
     t m p c c e r   | =   ( ( T I M _ I C P o l a r i t y   < <   4 U )   &   ( T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ) ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 1   =   t m p c c m r 1   ; 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   P o l a r i t y   a n d   F i l t e r   f o r   T I 2 . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l . 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ B O T H E D G E 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ T I 2 _ C o n f i g I n p u t S t a g e ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 1 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   2 :   R e s e t   t h e   C C 2 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 2 E ; 
     t m p c c m r 1   =   T I M x - > C C M R 1 ; 
     t m p c c e r   =   T I M x - > C C E R ; 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 1   & =   ~ T I M _ C C M R 1 _ I C 2 F ; 
     t m p c c m r 1   | =   ( T I M _ I C F i l t e r   < <   1 2 U ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 2 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 2 P   |   T I M _ C C E R _ C C 2 N P ) ; 
     t m p c c e r   | =   ( T I M _ I C P o l a r i t y   < <   4 U ) ; 
 
     / *   W r i t e   t o   T I M x   C C M R 1   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 1   =   t m p c c m r 1   ; 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I 3   a s   I n p u t . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *   @ p a r a m     T I M _ I C S e l e c t i o n   s p e c i f i e s   t h e   i n p u t   t o   b e   u s e d . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ D I R E C T T I :   T I M   I n p u t   3   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 3 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ I N D I R E C T T I :   T I M   I n p u t   3   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 4 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ T R C :   T I M   I n p u t   3   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   T R C . 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ r e t v a l   N o n e 
     *   @ n o t e   T I M _ I C F i l t e r   a n d   T I M _ I C P o l a r i t y   a r e   n o t   u s e d   i n   I N D I R E C T   m o d e   a s   T I 3 F P 4 
     *               ( o n   c h a n n e l 1   p a t h )   i s   u s e d   a s   t h e   i n p u t   s i g n a l .   T h e r e f o r e   C C M R 2   m u s t   b e 
     *                 p r o t e c t e d   a g a i n s t   u n - i n i t i a l i z e d   f i l t e r   a n d   p o l a r i t y   v a l u e s . 
     * / 
 s t a t i c   v o i d   T I M _ T I 3 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 2 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   3 :   R e s e t   t h e   C C 3 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 3 E ; 
     t m p c c m r 2   =   T I M x - > C C M R 2 ; 
     t m p c c e r   =   T I M x - > C C E R ; 
 
     / *   S e l e c t   t h e   I n p u t   * / 
     t m p c c m r 2   & =   ~ T I M _ C C M R 2 _ C C 3 S ; 
     t m p c c m r 2   | =   T I M _ I C S e l e c t i o n ; 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 2   & =   ~ T I M _ C C M R 2 _ I C 3 F ; 
     t m p c c m r 2   | =   ( ( T I M _ I C F i l t e r   < <   4 U )   &   T I M _ C C M R 2 _ I C 3 F ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 3 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 3 P ) ; 
     t m p c c e r   | =   ( ( T I M _ I C P o l a r i t y   < <   8 U )   &   T I M _ C C E R _ C C 3 P ) ; 
 
     / *   W r i t e   t o   T I M x   C C M R 2   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 2   =   t m p c c m r 2 ; 
     T I M x - > C C E R   =   t m p c c e r ; 
 } 
 
 / * * 
     *   @ b r i e f     C o n f i g u r e   t h e   T I 4   a s   I n p u t . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     T I M _ I C P o l a r i t y   T h e   I n p u t   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ R I S I N G 
     *                         @ a r g   T I M _ I C P O L A R I T Y _ F A L L I N G 
     *   @ p a r a m     T I M _ I C S e l e c t i o n   s p e c i f i e s   t h e   i n p u t   t o   b e   u s e d . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ D I R E C T T I :   T I M   I n p u t   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 4 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ I N D I R E C T T I :   T I M   I n p u t   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   I C 3 . 
     *                         @ a r g   T I M _ I C S E L E C T I O N _ T R C :   T I M   I n p u t   4   i s   s e l e c t e d   t o   b e   c o n n e c t e d   t o   T R C . 
     *   @ p a r a m     T I M _ I C F i l t e r   S p e c i f i e s   t h e   I n p u t   C a p t u r e   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F . 
     *   @ n o t e   T I M _ I C F i l t e r   a n d   T I M _ I C P o l a r i t y   a r e   n o t   u s e d   i n   I N D I R E C T   m o d e   a s   T I 4 F P 3 
     *               ( o n   c h a n n e l 1   p a t h )   i s   u s e d   a s   t h e   i n p u t   s i g n a l .   T h e r e f o r e   C C M R 2   m u s t   b e 
     *                 p r o t e c t e d   a g a i n s t   u n - i n i t i a l i z e d   f i l t e r   a n d   p o l a r i t y   v a l u e s . 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ T I 4 _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ I C P o l a r i t y ,   u i n t 3 2 _ t   T I M _ I C S e l e c t i o n , 
                                                             u i n t 3 2 _ t   T I M _ I C F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p c c m r 2 ; 
     u i n t 3 2 _ t   t m p c c e r ; 
 
     / *   D i s a b l e   t h e   C h a n n e l   4 :   R e s e t   t h e   C C 4 E   B i t   * / 
     T I M x - > C C E R   & =   ~ T I M _ C C E R _ C C 4 E ; 
     t m p c c m r 2   =   T I M x - > C C M R 2 ; 
     t m p c c e r   =   T I M x - > C C E R ; 
 
     / *   S e l e c t   t h e   I n p u t   * / 
     t m p c c m r 2   & =   ~ T I M _ C C M R 2 _ C C 4 S ; 
     t m p c c m r 2   | =   ( T I M _ I C S e l e c t i o n   < <   8 U ) ; 
 
     / *   S e t   t h e   f i l t e r   * / 
     t m p c c m r 2   & =   ~ T I M _ C C M R 2 _ I C 4 F ; 
     t m p c c m r 2   | =   ( ( T I M _ I C F i l t e r   < <   1 2 U )   &   T I M _ C C M R 2 _ I C 4 F ) ; 
 
     / *   S e l e c t   t h e   P o l a r i t y   a n d   s e t   t h e   C C 4 E   B i t   * / 
     t m p c c e r   & =   ~ ( T I M _ C C E R _ C C 4 P ) ; 
     t m p c c e r   | =   ( ( T I M _ I C P o l a r i t y   < <   1 2 U )   &   T I M _ C C E R _ C C 4 P ) ; 
 
     / *   W r i t e   t o   T I M x   C C M R 2   a n d   C C E R   r e g i s t e r s   * / 
     T I M x - > C C M R 2   =   t m p c c m r 2 ; 
     T I M x - > C C E R   =   t m p c c e r   ; 
 } 
 
 / * * 
     *   @ b r i e f     S e l e c t s   t h e   I n p u t   T r i g g e r   s o u r c e 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     I n p u t T r i g g e r S o u r c e   T h e   I n p u t   T r i g g e r   s o u r c e . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ T S _ I T R 0 :   I n t e r n a l   T r i g g e r   0 
     *                         @ a r g   T I M _ T S _ I T R 1 :   I n t e r n a l   T r i g g e r   1 
     *                         @ a r g   T I M _ T S _ I T R 2 :   I n t e r n a l   T r i g g e r   2 
     *                         @ a r g   T I M _ T S _ I T R 3 :   I n t e r n a l   T r i g g e r   3 
     *                         @ a r g   T I M _ T S _ T I 1 F _ E D :   T I 1   E d g e   D e t e c t o r 
     *                         @ a r g   T I M _ T S _ T I 1 F P 1 :   F i l t e r e d   T i m e r   I n p u t   1 
     *                         @ a r g   T I M _ T S _ T I 2 F P 2 :   F i l t e r e d   T i m e r   I n p u t   2 
     *                         @ a r g   T I M _ T S _ E T R F :   E x t e r n a l   T r i g g e r   i n p u t 
     *   @ r e t v a l   N o n e 
     * / 
 s t a t i c   v o i d   T I M _ I T R x _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   I n p u t T r i g g e r S o u r c e ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     / *   G e t   t h e   T I M x   S M C R   r e g i s t e r   v a l u e   * / 
     t m p s m c r   =   T I M x - > S M C R ; 
     / *   R e s e t   t h e   T S   B i t s   * / 
     t m p s m c r   & =   ~ T I M _ S M C R _ T S ; 
     / *   S e t   t h e   I n p u t   T r i g g e r   s o u r c e   a n d   t h e   s l a v e   m o d e * / 
     t m p s m c r   | =   ( I n p u t T r i g g e r S o u r c e   |   T I M _ S L A V E M O D E _ E X T E R N A L 1 ) ; 
     / *   W r i t e   t o   T I M x   S M C R   * / 
     T I M x - > S M C R   =   t m p s m c r ; 
 } 
 / * * 
     *   @ b r i e f     C o n f i g u r e s   t h e   T I M x   E x t e r n a l   T r i g g e r   ( E T R ) . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     T I M _ E x t T R G P r e s c a l e r   T h e   e x t e r n a l   T r i g g e r   P r e s c a l e r . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ E T R P R E S C A L E R _ D I V 1 :   E T R P   P r e s c a l e r   O F F . 
     *                         @ a r g   T I M _ E T R P R E S C A L E R _ D I V 2 :   E T R P   f r e q u e n c y   d i v i d e d   b y   2 . 
     *                         @ a r g   T I M _ E T R P R E S C A L E R _ D I V 4 :   E T R P   f r e q u e n c y   d i v i d e d   b y   4 . 
     *                         @ a r g   T I M _ E T R P R E S C A L E R _ D I V 8 :   E T R P   f r e q u e n c y   d i v i d e d   b y   8 . 
     *   @ p a r a m     T I M _ E x t T R G P o l a r i t y   T h e   e x t e r n a l   T r i g g e r   P o l a r i t y . 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ E T R P O L A R I T Y _ I N V E R T E D :   a c t i v e   l o w   o r   f a l l i n g   e d g e   a c t i v e . 
     *                         @ a r g   T I M _ E T R P O L A R I T Y _ N O N I N V E R T E D :   a c t i v e   h i g h   o r   r i s i n g   e d g e   a c t i v e . 
     *   @ p a r a m     E x t T R G F i l t e r   E x t e r n a l   T r i g g e r   F i l t e r . 
     *                     T h i s   p a r a m e t e r   m u s t   b e   a   v a l u e   b e t w e e n   0 x 0 0   a n d   0 x 0 F 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ E T R _ S e t C o n f i g ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   T I M _ E x t T R G P r e s c a l e r , 
                                               u i n t 3 2 _ t   T I M _ E x t T R G P o l a r i t y ,   u i n t 3 2 _ t   E x t T R G F i l t e r ) 
 { 
     u i n t 3 2 _ t   t m p s m c r ; 
 
     t m p s m c r   =   T I M x - > S M C R ; 
 
     / *   R e s e t   t h e   E T R   B i t s   * / 
     t m p s m c r   & =   ~ ( T I M _ S M C R _ E T F   |   T I M _ S M C R _ E T P S   |   T I M _ S M C R _ E C E   |   T I M _ S M C R _ E T P ) ; 
 
     / *   S e t   t h e   P r e s c a l e r ,   t h e   F i l t e r   v a l u e   a n d   t h e   P o l a r i t y   * / 
     t m p s m c r   | =   ( u i n t 3 2 _ t ) ( T I M _ E x t T R G P r e s c a l e r   |   ( T I M _ E x t T R G P o l a r i t y   |   ( E x t T R G F i l t e r   < <   8 U ) ) ) ; 
 
     / *   W r i t e   t o   T I M x   S M C R   * / 
     T I M x - > S M C R   =   t m p s m c r ; 
 } 
 
 / * * 
     *   @ b r i e f     E n a b l e s   o r   d i s a b l e s   t h e   T I M   C a p t u r e   C o m p a r e   C h a n n e l   x . 
     *   @ p a r a m     T I M x   t o   s e l e c t   t h e   T I M   p e r i p h e r a l 
     *   @ p a r a m     C h a n n e l   s p e c i f i e s   t h e   T I M   C h a n n e l 
     *                     T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s : 
     *                         @ a r g   T I M _ C H A N N E L _ 1 :   T I M   C h a n n e l   1 
     *                         @ a r g   T I M _ C H A N N E L _ 2 :   T I M   C h a n n e l   2 
     *                         @ a r g   T I M _ C H A N N E L _ 3 :   T I M   C h a n n e l   3 
     *                         @ a r g   T I M _ C H A N N E L _ 4 :   T I M   C h a n n e l   4 
     *   @ p a r a m     C h a n n e l S t a t e   s p e c i f i e s   t h e   T I M   C h a n n e l   C C x E   b i t   n e w   s t a t e . 
     *                     T h i s   p a r a m e t e r   c a n   b e :   T I M _ C C x _ E N A B L E   o r   T I M _ C C x _ D I S A B L E . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ C C x C h a n n e l C m d ( T I M _ T y p e D e f   * T I M x ,   u i n t 3 2 _ t   C h a n n e l ,   u i n t 3 2 _ t   C h a n n e l S t a t e ) 
 { 
     u i n t 3 2 _ t   t m p ; 
 
     / *   C h e c k   t h e   p a r a m e t e r s   * / 
     a s s e r t _ p a r a m ( I S _ T I M _ C C 1 _ I N S T A N C E ( T I M x ) ) ; 
     a s s e r t _ p a r a m ( I S _ T I M _ C H A N N E L S ( C h a n n e l ) ) ; 
 
     t m p   =   T I M _ C C E R _ C C 1 E   < <   ( C h a n n e l   &   0 x 1 F U ) ;   / *   0 x 1 F U   =   3 1   b i t s   m a x   s h i f t   * / 
 
     / *   R e s e t   t h e   C C x E   B i t   * / 
     T I M x - > C C E R   & =   ~ t m p ; 
 
     / *   S e t   o r   r e s e t   t h e   C C x E   B i t   * / 
     T I M x - > C C E R   | =   ( u i n t 3 2 _ t ) ( C h a n n e l S t a t e   < <   ( C h a n n e l   &   0 x 1 F U ) ) ;   / *   0 x 1 F U   =   3 1   b i t s   m a x   s h i f t   * / 
 } 
 
 # i f   ( U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   = =   1 ) 
 / * * 
     *   @ b r i e f     R e s e t   i n t e r r u p t   c a l l b a c k s   t o   t h e   l e g a c y   w e a k   c a l l b a c k s . 
     *   @ p a r a m     h t i m   p o i n t e r   t o   a   T I M _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s 
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   T I M   m o d u l e . 
     *   @ r e t v a l   N o n e 
     * / 
 v o i d   T I M _ R e s e t C a l l b a c k ( T I M _ H a n d l e T y p e D e f   * h t i m ) 
 { 
     / *   R e s e t   t h e   T I M   c a l l b a c k   t o   t h e   l e g a c y   w e a k   c a l l b a c k s   * / 
     h t i m - > P e r i o d E l a p s e d C a l l b a c k                           =   H A L _ T I M _ P e r i o d E l a p s e d C a l l b a c k ; 
     h t i m - > P e r i o d E l a p s e d H a l f C p l t C a l l b a c k           =   H A L _ T I M _ P e r i o d E l a p s e d H a l f C p l t C a l l b a c k ; 
     h t i m - > T r i g g e r C a l l b a c k                                       =   H A L _ T I M _ T r i g g e r C a l l b a c k ; 
     h t i m - > T r i g g e r H a l f C p l t C a l l b a c k                       =   H A L _ T I M _ T r i g g e r H a l f C p l t C a l l b a c k ; 
     h t i m - > I C _ C a p t u r e C a l l b a c k                                 =   H A L _ T I M _ I C _ C a p t u r e C a l l b a c k ; 
     h t i m - > I C _ C a p t u r e H a l f C p l t C a l l b a c k                 =   H A L _ T I M _ I C _ C a p t u r e H a l f C p l t C a l l b a c k ; 
     h t i m - > O C _ D e l a y E l a p s e d C a l l b a c k                       =   H A L _ T I M _ O C _ D e l a y E l a p s e d C a l l b a c k ; 
     h t i m - > P W M _ P u l s e F i n i s h e d C a l l b a c k                   =   H A L _ T I M _ P W M _ P u l s e F i n i s h e d C a l l b a c k ; 
     h t i m - > P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k   =   H A L _ T I M _ P W M _ P u l s e F i n i s h e d H a l f C p l t C a l l b a c k ; 
     h t i m - > E r r o r C a l l b a c k                                           =   H A L _ T I M _ E r r o r C a l l b a c k ; 
     h t i m - > C o m m u t a t i o n C a l l b a c k                               =   H A L _ T I M E x _ C o m m u t C a l l b a c k ; 
     h t i m - > C o m m u t a t i o n H a l f C p l t C a l l b a c k               =   H A L _ T I M E x _ C o m m u t H a l f C p l t C a l l b a c k ; 
     h t i m - > B r e a k C a l l b a c k                                           =   H A L _ T I M E x _ B r e a k C a l l b a c k ; 
 } 
 # e n d i f   / *   U S E _ H A L _ T I M _ R E G I S T E R _ C A L L B A C K S   * / 
 
 / * * 
     *   @ } 
     * / 
 
 # e n d i f   / *   H A L _ T I M _ M O D U L E _ E N A B L E D   * / 
 / * * 
     *   @ } 
     * / 
 
 / * * 
     *   @ } 
     * / 
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * / 